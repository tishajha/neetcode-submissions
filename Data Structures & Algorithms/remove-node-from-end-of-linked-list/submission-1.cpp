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
        vector<ListNode*> temp;
        ListNode* curr=head;
        while (curr!=nullptr){
            temp.push_back(curr);
            curr=curr->next;
        }
        int ri= temp.size()-n;
        if(ri==0){
            return head->next;
        }
        temp[ri-1]->next=temp[ri]->next;
        return head;
    }
};
