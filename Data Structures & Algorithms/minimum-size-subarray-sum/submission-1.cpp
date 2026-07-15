class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0; int total=0; int result=INT_MAX;
        for(int i=0; i<nums.size();i++){
            total+=nums[i];
            while(total>=target){
                result=min(result, (i-l+1));
                total-=nums[l];
                l++;

            }
        }
        return result==INT_MAX?0:result;
    }
};