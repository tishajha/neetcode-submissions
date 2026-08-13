/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* slow = &dummy;
        ListNode* fast = &dummy;

        // Create a gap of n nodes.
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // Move until fast reaches the last node.
        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        // slow is immediately before the node to delete.
        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;

        delete nodeToDelete;

        return dummy.next;
    }
};