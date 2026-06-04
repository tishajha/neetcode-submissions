class Solution {
    public int maxProduct(int[] nums) {
        int maxprod=nums[0];
        for(int i=0; i<nums.length; i++){
            int prod=1;
            for(int j=i; j<nums.length; j++ ){
                prod= prod*nums[j];
                 maxprod = Math.max(maxprod, prod);
                
            }
           
            
        }
        return maxprod;
        
    }
}
