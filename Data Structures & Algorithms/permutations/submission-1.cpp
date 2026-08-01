class Solution {
public:
vector<vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n= nums.size();
        vector<bool>visited(n);
        backtrack(temp,nums,visited);
        return res;
    }
    void backtrack(vector<int>& temp, vector<int>& nums, vector<bool>&visited){
        if(temp.size()== nums.size()){
            res.push_back(temp);
        }
        for(int i=0; i<nums.size();i++){
            if(!visited[i]){
                temp.push_back(nums[i]);
                visited[i]=true;
                backtrack(temp, nums, visited);
                temp.pop_back();
                 visited[i]= false;
            }
        }
    }
};