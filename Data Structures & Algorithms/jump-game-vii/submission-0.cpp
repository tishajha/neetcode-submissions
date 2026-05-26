class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n=s.size();
        vector<bool>dp(n, false);
        int j;
        dp[0]=true;
        for(int i=0;i<n;i++){
            if(!dp[i]){
                continue;
            }
            j=max(j,i+minJump);
            while(j<min(i+maxJump+1,n)){
                if(s[j]=='0'){
                    dp[j]=true;
                }
                j++;
            }
        }
        return dp[n-1];
        
    }
};