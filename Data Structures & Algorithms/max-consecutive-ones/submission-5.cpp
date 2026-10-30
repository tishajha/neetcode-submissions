class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count=INT_MIN;
        int l=0; int r=0;
        int count=0;
        for( int n: nums){
            if(n==0){
                max_count= max(count, max_count);
                count=0;
            }
            else {
                count++;
            }
            max_count= max(count, max_count);
        }
        return max_count;
    }
};