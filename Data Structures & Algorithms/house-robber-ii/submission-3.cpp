class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
       return max(helper(vector<int>(nums.begin()+1,nums.end())),
                    helper(vector<int>(nums.begin(),nums.end()-1)));        
       
    }
    int helper(vector<int> nums){
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return nums[0];
        }
        int n=nums.size();
        vector<int>dp(n);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
        }
        return dp[n-1];
    }
    // int dfs(int i , bool flag,vector<int>&nums){
    //     if(i>= nums.size()|| (flag && i== nums.size()-1)){
    //         return 0;
    //     }
    //     return max(dfs(i+1,flag,nums), nums[i]+dfs(i+2,flag||i==0,nums));
    // }
};
