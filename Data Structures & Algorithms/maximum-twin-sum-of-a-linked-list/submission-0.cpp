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
    int pairSum(ListNode* head) {
        ListNode* fast= head, *slow= head;
        while(fast->next && fast){
            slow= slow->next;
            fast= fast->next->next;
        }
        ListNode *prev= nullptr, * curr= slow;
        while(curr){
            ListNode* next= curr->next;
            curr->next= prev;
            prev= curr;
            curr= next;
        }
        int ans=0;
        ListNode* first=head, *second=prev;
        while(second){
            ans= max(ans, first->val+second->val);
            first= first->next;
            second= second->next;
        }
        return ans;
    }
};