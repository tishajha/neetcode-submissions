class Solution {
     private static final int[][] directions = {{1, 0}, {-1, 0},
                                               {0, 1}, {0, -1}};
    public int maxAreaOfIsland(int[][] grid) {
        int row= grid.length;
        int col= grid[0].length;
        int area=0;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j]==1){
                    area= Math.max(area, dfs(i, j, grid));
                }
            }
        }
        return area;
        
    }
    public int dfs(int r, int c, int[][] grid){
        if(r<0||r>=grid.length || c<0 ||c>=grid[0].length|| grid[r][c]==0){
            return 0;
        }
        int res=1;
        grid[r][c]=0;
        for(int[] dir: directions){
            int nr=r+dir[0];
            int nc= c+dir[1];
            res+= dfs(nr, nc, grid);
        }
        return res;
    }
}
