class Solution {
    public int removeElement(int[] nums, int val) {
        List<Integer> newnum = new ArrayList();
        for (int num: nums){
            if (num!=val){
                newnum.add(num);
            }
        }
        int n= newnum.size();
        for (int i=0; i<n;i++){
            nums[i]= newnum.get(i);
        }
        return newnum.size();

    }
}