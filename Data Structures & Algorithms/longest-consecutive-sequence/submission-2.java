class Solution {
    public int longestConsecutive(int[] nums) {
        Set <Integer> set= new HashSet<>();
        int count =0;
        if(nums.length==1){
            count=1;
        }
        for(int num: nums ){
            set.add(num);
        }
        for(int num:nums){
            if(!set.contains(num-1)){
                int curr=num;
                int currcount=1;
                while (set.contains (curr+1)){
                    currcount++;
                    curr++;
                }
                count= Math.max(count,currcount);
            }

        }
        return count;
    }
}
