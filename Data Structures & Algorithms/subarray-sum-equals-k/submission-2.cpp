class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int > map;
        int n=nums.size();
        int sum=0;
        int res=0;
        map[0]=1;
        for(int n: nums){
            sum+=n;
            if(map[sum-k]){
                res+=map[sum-k];
            }
            map[sum]++;
        }
        return res;
    }
};