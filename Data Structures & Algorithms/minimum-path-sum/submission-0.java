class Solution {
    int [][] dp;
    int R,C;
    public int minPathSum(int[][] grid) {
        int r=grid.length; R=r;
        int c= grid[0].length; C=c;
        dp= new int[r][c];
        for (int[] row : dp) {
            Arrays.fill(row, -1);
        }
    
        return dfs(0,0,grid);
    }
    public int dfs(int r, int c, int[][] grid){
        if(r==R-1 && c==C-1){
            return grid[r][c];
        }
        if(r==R||c==C){
            return Integer.MAX_VALUE;
        }
        if(dp[r][c]!=-1){
            return dp[r][c];
        }
        dp[r][c]= grid[r][c]+ Math.min(dfs(r+1,c,grid),dfs(r,c+1, grid));
        return dp[r][c];
    }
}