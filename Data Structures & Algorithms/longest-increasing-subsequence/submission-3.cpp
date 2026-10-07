class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n= nums.size();
         int ans= 1;
        vector<int> prefix(n, 1);
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(nums[j]<nums[i]){
                    prefix[i]= max(prefix[i], prefix[j]+1);
                    ans= max(prefix[i], ans);
                }
            }
        }
        return ans;

    }
};
