class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l=0;
        vector<int> ans;
        for(int r=0;r<=nums.size()-k; r++){
            int ma=nums[r];
            for(int l=r; l<r+k;l++){
               ma= max(ma, nums[l]);
                
            }
            ans.push_back(ma);
        }
        return ans;
    }
};
