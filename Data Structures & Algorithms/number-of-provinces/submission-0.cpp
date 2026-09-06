class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n= isConnected.size();
        vector<bool>visited (n,false);
        int count=0;
        for(int i=0; i<n ; i++){
            if(!visited[i]){
                count++;
                dfs(i, isConnected, visited, n);
            }
        }
        return count;
    }
    void dfs(int node,vector<vector<int>>& isConnected, vector<bool>& visited, int n ){
        visited[node]= true;
        for(int nei=0; nei<n;nei++){
            if(isConnected[node][nei]==1&& !visited[nei]){
                dfs(nei, isConnected, visited, n);
            }
        }
    }
};