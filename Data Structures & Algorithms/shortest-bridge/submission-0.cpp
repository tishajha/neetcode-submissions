class Solution {
public:
    int N;
    vector<vector<bool>> visited;
    vector<vector<int>> direct = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    int shortestBridge(vector<vector<int>>& grid) {
        N = grid.size();
        visited = vector<vector<bool>>(N, vector<bool>(N, false));

        bool found = false;
        for (int r = 0; r < N; r++) {
            if (found) break;
            for (int c = 0; c < N; c++) {
                if (grid[r][c] == 1) {
                    dfs(grid, r, c);
                    found = true;
                    break;
                }
            }
        }

        return bfs(grid);
    }

private:
    void dfs(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || c < 0 || r >= N || c >= N || grid[r][c] == 0 || visited[r][c])
            return;

        visited[r][c] = true;
        for (auto& d : direct) {
            dfs(grid, r + d[0], c + d[1]);
        }
    }

    int bfs(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        for (int r = 0; r < N; r++) {
            for (int c = 0; c < N; c++) {
                if (visited[r][c]) {
                    q.push({r, c});
                }
            }
        }

        int res = 0;
        while (!q.empty()) {
            for (int i = q.size(); i > 0; i--) {
                auto [r, c] = q.front(); q.pop();

                for (auto& d : direct) {
                    int curR = r + d[0], curC = c + d[1];

                    if (curR < 0 || curC < 0 || curR >= N || curC >= N || visited[curR][curC])
                        continue;

                    if (grid[curR][curC] == 1) return res;
                    q.push({curR, curC});
                    visited[curR][curC] = true;
                }
            }
            res++;
        }
        return res;
    }
};