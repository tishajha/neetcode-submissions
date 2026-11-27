class Solution {
public:
vector<vector< int>> dp;
int row; int col;
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        row= obstacleGrid.size();
        col=obstacleGrid[0].size();
        dp.resize(row, vector<int>(col,-1));
        if(obstacleGrid[row-1][col-1]==1|| obstacleGrid[0][0]==1){
            return 0;
        }
        return dfs(0,0,obstacleGrid);
        
    }
    int dfs(int r, int c, vector<vector<int>> obstacleGrid){
        if(r>=row||c>=col||obstacleGrid[r][c]==1){
            return 0;
        }
        if(r==row-1 && c==col-1){
            return 1;
        }
        if(dp[r][c]!=-1){
            return dp[r][c];
        }
        dp[r][c]=dfs(r+1,c,obstacleGrid)+dfs(r, c+1,obstacleGrid);

        return dp[r][c];
    }
};