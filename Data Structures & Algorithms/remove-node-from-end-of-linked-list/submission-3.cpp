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
        
        ListNode* dummy= head;
        int i;
        int count=0;
        while (dummy!=nullptr){
            count++;
            dummy  = dummy->next;
            
        }
        i=count-n;
        
        if (i==0){
            return head->next;
        }
        dummy=head;
        for(int j=0;j<count-1;j++){
            if((j+1)==i){
                dummy->next = dummy->next->next;
                break;
            }
            dummy= dummy->next;
        }
       return head;
        
    }
};
