/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode a1= head;
        ListNode a2= head ;
        while(a2!=null && a2.next!=null){
            a1=a1.next;
            a2=a2.next.next;
            if(a1==a2)
                return true;
        }
        return false;
    }
}
