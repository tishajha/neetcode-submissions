class Solution {
public:
vector<vector<int>> dp; int m, n;

    int minDistance(string word1, string word2) {
        m= word1.length(); n=word2.length();
        dp = vector<vector<int>>(m, vector<int>(n, INT_MAX));
        return dfs(0,0, word1,word2);
    }
    int dfs(int i, int j , string & word1, string& word2){
        if(i==m){
            return n-j;
        }
        if(j==n){
            return m-i;
        }
        if(dp[i][j]!=INT_MAX){
            return dp[i][j];
        }
        if(word1[i]==word2[j]){
            return dfs(i+1, j+1, word1, word2);
        }
        else {
            int res= min(dfs(i, j+1, word1, word2), dfs(i+1,j, word1, word2));
            res= min(res, dfs(i+1, j+1, word1, word2));
            dp[i][j]=res+1;
        }
        return dp[i][j];
    }
};