class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+3, INT_MAX/1000);
        dp[cost.size()]=0;
        for(int i= cost.size()-1; i>=0;i-- ){
            dp[i]= min(dp[i+1]+cost[i],dp[i+2]+cost[i]);
        }
        return min(dp[0],dp[1]);
    }
};
