class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int num:nums1){
            int nextGreater=-1;
            for(int i=nums2.size()-1;i>0;i--){
                if(nums2[i]>num){
                    nextGreater =nums2[i];
                }
                else if(nums2[i]==num){
                    break;
                }
            }
            res.push_back(nextGreater);
        }
        return res;
    }
};