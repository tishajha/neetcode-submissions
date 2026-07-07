class Solution {
    public int subarraySum(int[] nums, int k) {
        int res=0; int currsum=0;
        Map<Integer,Integer>mp= new HashMap<>();
        mp.put(0,1);
        for(int n:nums){
            currsum+=n;
            int diff= currsum-k;
            if(mp.containsKey(diff)){
                res+=mp.get(diff);
            }
            else{
                res=res+0;
            }
            mp.put(currsum, mp.getOrDefault(currsum,0)+1);
        }
        return res;
    }
}