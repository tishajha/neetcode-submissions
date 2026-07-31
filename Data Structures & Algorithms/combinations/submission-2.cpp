class Solution {
public:
vector<vector<int>> res;
    vector<vector<int>> combine(int n, int k) {
        vector<int> com;
        backtrack(1, n,k , com );
        return res;
    }
    void backtrack(int i, int n, int k, vector<int>& com){
        if(i>n){
            if(com.size()==k){
                res.push_back(com);
            }
            return;
        }
        com.push_back(i);
        backtrack(i+1, n, k, com);
        com.pop_back();
        backtrack(i+1,n,k,com);
    }
};