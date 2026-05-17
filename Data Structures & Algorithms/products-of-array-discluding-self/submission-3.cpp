class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        // vector<int>pref(n);
        // vector<int> suff(n);
        vector<int> result(n);
        result[0]=1;
        // suff[n-1]=1;
        for(int i=1;i<n;i++){
            result[i]=nums[i-1]*result[i-1];
        }
        // for(int i=n-1; i>=0;i--){
        //     suff[i]=nums[i+1]*suff[i-1];
        // }
        int postfix=1;
        for(int i=n-1; i>=0;i--){
            result[i]=result[i]*postfix;
            postfix*= nums[i];
        
        }
        return result;
    }
};
