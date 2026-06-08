class Solution {
    public int maxProfit(int[] prices) {
        int minbuy=prices[0];
        int maxprofit=0;
        for(int n: prices ){
            minbuy=Math.min(minbuy, n);
            maxprofit=Math.max(maxprofit,n-minbuy);
        }
        return maxprofit;
    }
}
