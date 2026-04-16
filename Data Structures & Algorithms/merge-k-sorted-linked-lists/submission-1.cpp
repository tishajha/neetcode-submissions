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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> nodeval;
        for(ListNode* lst:lists){
            while (lst){
                nodeval.push_back(lst->val);
                lst=lst->next;
            }
        }
        sort(nodeval.begin(),nodeval.end());
        ListNode* result= new ListNode(0);
        ListNode* curr= result;
        for(int i:nodeval){
            curr->next= new ListNode(i);
            curr= curr->next;
        }        
        return result->next;
    }
};
