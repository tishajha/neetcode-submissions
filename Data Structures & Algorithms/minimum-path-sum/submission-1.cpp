class Solution {
public:
    vector<vector<int>> dp;
    int R;
    int C;
    
    int minPathSum(vector<vector<int>>& grid) {
       R= grid.size();
       C= grid[0]. size();
         dp = vector<vector<int>>(R, vector<int>(C, -1));
       return dfs(0,0,grid);
    }
    int dfs(int r, int c, vector<vector<int>>& grid ){
        if (r==R-1 && c==C-1){
            return grid[r][c];
        }
        if(r==R||c==C){
            return INT_MAX;
        }
        if(dp[r][c]!=-1){
            return dp[r][c];
        }
        
        dp[r][c]= grid[r][c]+min(dfs(r+1,c, grid), dfs(r,c+1, grid));
        return dp[r][c];
    }
};