/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    public Node copyRandomList(Node head) {
        if (head == null) return null; 
        HashMap<Node, Node> map = new HashMap<>();
        Node newhead = head;
    
       
        while (newhead!= null){
            map.put(newhead, new Node(newhead.val));
            newhead= newhead.next;
        }
        newhead=head;
        while (newhead!=null){
            Node copy = map.get(newhead);
            copy.next= map.get(newhead.next);
            copy.random= map.get(newhead.random);
            newhead=newhead.next;
        }
        return map.get(head);
    }
}
