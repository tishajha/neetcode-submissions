class Solution {
public:
    vector<int> memo;
    bool wordBreak(string s, vector<string>& wordDict) {
        memo.assign(s.size(), -1);
        return dfs(s,0,wordDict);
        
    }
    bool dfs(string & s,int i, vector<string>& wordDict ){
        if(i==s.size()){
            return true;
        }
        if(i>s.size()){
            return false;
        }
        if(memo[i]==-1){
        for(auto w:wordDict){
            if(s.substr(i,w.size())==w){
               if(dfs(s, i+w.size(), wordDict)){
                memo[i]=1;
                return true;
               } 
            }
        }
        memo[i]=0;
        return false;
        }
        else{
            return memo[i];
        }
    }
};
