class Solution {
public:
    vector<bool> know;
    vector<bool> ans;
    bool wordBreak(string s, vector<string>& wordDict) {
        know.assign(s.size(), false);
        ans.resize(s.size());
        return dfs(s,0,wordDict);
        
    }
    bool dfs(string & s,int i, vector<string>& wordDict ){
        if(i==s.size()){
            return true;
        }
        if(i>s.size()){
            return false;
        }
        if (know[i]) {
            return ans[i];
        }
        for(auto w:wordDict){
            if(s.substr(i,w.size())==w){
               if(dfs(s, i+w.size(), wordDict)){
                know[i] = true;
                ans[i] = true;
                return true;
               } 
            }
        }
        know[i] = true;
        ans[i] = false;
        return false;
    }
};
