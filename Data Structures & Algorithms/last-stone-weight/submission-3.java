class Solution {
    public int lastStoneWeight(int[] stones) {
      PriorityQueue<Integer> minheap = new PriorityQueue<>();
        for(int s: stones){
            minheap.offer(-s);
        }  
        while(minheap.size()>1){
            int x= minheap.poll();
            int y= minheap.poll();
            if(y>x){
                minheap.offer(x-y);
            }
        }
        minheap.offer(0);
        return Math.abs(minheap.peek());
    }
}
