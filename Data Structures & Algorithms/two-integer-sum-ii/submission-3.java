class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int n= numbers.length;
        int s=0, e=n-1;
        while (s<e){
            if(numbers[s]+numbers[e]==target){
                 return new int[]{s+1, e+1};
            }
            else if (numbers[s]+numbers[e]>target){
                e--;
            }
            else if (numbers[s]+numbers[e]<target){
                s++;
            }
        }
        return new int[]{-1,-1};
    }
}
