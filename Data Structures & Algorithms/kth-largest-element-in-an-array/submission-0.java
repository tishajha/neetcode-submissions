class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> minheap= new PriorityQueue<>();
        int ans; 
        for(int num: nums){
            minheap.offer(num);
            while(minheap.size()>k){
                minheap.poll();
            }
        }
        ans= minheap.poll();
        return ans;
    }
}
