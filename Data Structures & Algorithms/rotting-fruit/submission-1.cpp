class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int fresh=0; int time =0;
        int m= grid.size();
        int n=grid[0].size();

        for(int i=0;i<m;i++){
            for(int j=0; j<n;j++){
                if(grid[i][j]==1){
                    fresh++;
                }
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        vector<pair<int, int>>direction={{0,1},{1,0},{0,-1},{-1,0}};
        while(fresh>0 && !q.empty()){
            int len=q.size();
            for(int i=0; i<len;i++){
                auto curr= q.front();
                q.pop();
                int r=curr.first;
                int c=curr.second;

                for(const auto& dir:direction)
                {
                    int row= r+dir.first;
                    int col= c+dir.second;
                    if(row>=0 && row<m && col>=0&& col<n &&grid[row][col]==1){
                        grid[row][col]=2;
                        q.push({row,col});
                        fresh--;
                    }
                }

            }
            time++;
        }
        return fresh==0? time: -1;
    }
};
