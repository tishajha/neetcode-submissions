class Solution {
    public int[] productExceptSelf(int[] nums) {
        int size= nums.length;
        int[] arr = new int[size];
        Arrays.fill(arr, 1);

        for (int i=0; i<size;i++){
            for (int j=0; j<size;j++)
            if (i!=j){
                arr[i]*=nums[j];
            }

        }
        return arr;
    }
}  
