class Solution {
    public int majorityElement(int[] nums) {
        
        int res=0, maxcount=0;
        Map<Integer, Integer> mp= new HashMap<>();
        for(int num:nums){
            mp.put(num, mp.getOrDefault(num, 0)+1);
            if(mp.get(num)>maxcount){
                res= num;
                maxcount=mp.get(num);
            }
        }
        return res;
    }
}