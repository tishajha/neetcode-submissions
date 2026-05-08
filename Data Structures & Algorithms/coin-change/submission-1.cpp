class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,amount+1);
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            for(int coin:coins){
                if(coin<=i){
                    dp[i]=min(dp[i], 1+dp[i-coin]);
                }
            }
        }
        return dp[amount]>amount?-1: dp[amount];
    }

    // int dfs(vector<int>& coins, int amount){
    //     if(amount ==0){
    //         return 0;
    //     }
    //     int res= 1e9;
    //     for(int coin:coins){
    //         if(amount-coin>=0){
    //             res= min(res, 1+dfs(coins, amount-coin));
    //         }
    //     }
    //     return res;
    // }
};
