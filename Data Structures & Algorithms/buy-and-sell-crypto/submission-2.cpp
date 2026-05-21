class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int n=prices.size();
        int cost=0;
        int minval=prices[0];
        if(n==0){
            return 0;
        }
        for(int i=0;i<n;i++){
            minval= min(minval, prices[i]);
            cost= prices[i]- minval;
            maxprofit= max(maxprofit, cost);
        }
        
        
        return maxprofit;
    }
};
