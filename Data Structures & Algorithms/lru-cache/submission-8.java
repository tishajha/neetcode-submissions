class Node {
    int key; 
    int val;
    Node prev;
    Node next;


    Node (int key , int value){
        this.key= key;
        this.val=value;
        this.prev=null;
        this.next=null;
    }
}


/*

lets say there cap = 2 
 (2,3 ) (3,7) 
 if (4,2) is trying to enter 
 then we will check the key if it is present then update the value of the key 
 and if the key is not present then we need to remove the least recently used key value 


*/
class LRUCache {
    /// (2, 3)
    private int cap ;
    private Map<Integer, Node>  cache ;
    private Node left;
    private Node right;

    public LRUCache(int capacity) {
        this.cap = capacity ;
        this. cache= new HashMap<>();
        this.left=new Node(0,0);
        this.right = new Node (0,0);
        this.left.next=right;
        this.right.prev=left;
    }
    public void insert (Node node){
        // Node nodeprev= left.next;
        Node nodeprev= right.prev;
        nodeprev.next= node;
        node.prev=nodeprev;
        node.next=right;
        right.prev=node;
    }
    public void remove(Node node){
        Node nodepre= node.prev;
        Node nodenext=node.next;
        nodepre.next= nodenext;
        nodenext.prev=nodepre;
    }

    
    public int get(int key) {
        if(cache.containsKey(key)){
            Node node= cache.get(key);
            remove(node);
            insert(node);
            return node.val;
        }
        return -1;
        
    }
    
    public void put(int key, int value) {
        if(cache.containsKey(key)){
            Node node=cache.get(key);
            remove(node);
        }
        Node newNode= new Node(key, value);
        cache.put(key,newNode);
        insert(newNode);
        if(cache.size()>cap){
            Node lru= left.next;
            remove(lru);
            cache.remove(lru.key);
        }
        
    }
}
