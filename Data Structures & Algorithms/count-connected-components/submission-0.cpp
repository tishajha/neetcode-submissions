class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int >> adj(n);
        vector<bool> visit(n,false);
        for(const auto& ed:edges){
            adj[ed[0]].push_back(ed[1]);
            adj[ed[1]].push_back(ed[0]);
        }
        int res=0;
        for(int i=0;i<n;i++){
            if(!visit[i]){
                dfs(adj,visit,i);
                res++;
            }
        }
        return res;
    }
    void dfs(vector<vector<int>>&adj, vector<bool> &visit, int i){
        visit[i]=true;
        for(int nei:adj[i]){
            if(!visit[nei]){
                dfs(adj,visit,nei);
            }
        }
    }
};
