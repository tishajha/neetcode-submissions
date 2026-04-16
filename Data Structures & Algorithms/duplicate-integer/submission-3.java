class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashMap <Integer, Integer> set =new HashMap<>();
        for (int i=0; i< nums.length; i++){
            int curr=nums[i];
            if(set.containsKey(curr)){
                return true;
            }
            set.put(curr, i);
        }
        return false;
    }
}
