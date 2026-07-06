class Solution {
    public int maxProfit(int[] price) {
        int l=0, r=1;
        int maxprofit=0;
        while(r<price.length){
            if(price[l]<price[r]){
                int profit= price[r]-price[l];
                maxprofit=Math.max(maxprofit,profit);
            }
            else {
                l=r;
            }
            r++;
        }
        return maxprofit;
    }
}
