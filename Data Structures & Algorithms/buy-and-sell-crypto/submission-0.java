class Solution {
    public int maxProfit(int[] prices) {
        int n=prices.length;
        int max_cost=0,cost=0;
        if(n==0){
            return 0;
        }
        int min_price=prices[0];
        for(int i=0;i<n ;i++){
            min_price= Math.min(min_price,prices[i]);
            cost = prices[i]- min_price;
            max_cost= Math.max(max_cost, cost);
        }
        return max_cost;
    }
}
