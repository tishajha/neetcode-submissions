class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> pervMap = new HashMap<>();
        for (int i=0;i< nums.length ;i++){
            int num =nums[i];
            int diff = target - num ;
             if( pervMap.containsKey(diff)){
                return new int[] {pervMap.get(diff),i};
             }
            pervMap.put(num,i);
        }
        return new int[] {};
    }
}
