class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
         vector<vector<int>> memo= triangle;
        for (auto& row : memo)
        fill(row.begin(), row.end(), INT_MAX);
        return dfs(0,0, triangle, memo);
    }
    int dfs(int r, int c, vector<vector<int>>& triangle, vector<vector<int>> &memo){
        if(r>=triangle.size()){
            return 0;
        }
        if(memo[r][c]!= INT_MAX){
            return memo[r][c];
        }
        memo[r][c]=triangle[r][c]+ min(dfs(r+1, c, triangle, memo), dfs(r+1, c+1, triangle, memo));
        return memo[r][c];
    }
};