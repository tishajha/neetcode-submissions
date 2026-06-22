class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        int n=nums.length;
        int l=0,r=0;
        int[ ] ans=new int [n-k+1];
        Deque<Integer> dq= new LinkedList<>();
        while(r<n){
            while(!dq.isEmpty() && nums[dq.peekLast()]<nums[r]){
                dq.removeLast();
            }
            dq.offerLast(r);
            if(!dq.isEmpty() && dq.peekFirst()<l){
                dq.removeFirst();
            }
            
            if(r+1>=k){
                ans[l]=nums[dq.peekFirst()];
                l++;
            }
            r++;
        }
        return ans;
    }
}
