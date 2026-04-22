class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>visited;
        for(int n: nums){
            if(visited.find(n)!=visited.end()){
                return true;
            }
            visited.insert(n);
        }
        return false;
    }
};