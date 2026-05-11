class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==0){
            return false;
        }
        unordered_map<int, int> st ;
        for( auto & num:nums){
            if(st[num]>0){
                return true;
            }
            st[num]++;
        }
        return false;
    }
};