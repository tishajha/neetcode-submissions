class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==0){
            return false;
        }
        unordered_set<int> st ;
        for( auto & num:nums){
            if(st.count(num)){
                return true;
            }
            st.insert(num);
        }
        return false;
    }
};