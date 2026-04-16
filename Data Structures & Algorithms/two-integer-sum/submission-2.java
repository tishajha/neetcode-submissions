class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer , Integer> set =new HashMap<>();
        for (int i =0 ; i<nums.length;i++){
            int num= nums[i];
            int diff =target - num;
            if(set.containsKey(diff)){
                return new int[]{ set.get(diff),i};
            }
            else 
             set.put(num,i);
        }
        return new int []{};
    }
}
