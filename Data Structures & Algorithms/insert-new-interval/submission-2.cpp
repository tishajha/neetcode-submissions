class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        if(intervals.empty()){
            return {newInterval};
        }
        int n= intervals.size();
        int target= newInterval[0];
        int left =0, right=n-1;
        int mid;
        while(left<=right){
            mid= (left+right)/2;
            if(intervals[mid][0]<target){
                left= mid+1;
            }
            else{
                right= mid-1;
            }
        }
        intervals.insert(intervals.begin()+left, newInterval);
        for(const auto& interval:intervals){
            if(res.empty()|| res.back()[1]< interval[0]){
                res.push_back(interval);
            }
            else {
                res.back()[1]=max(res.back()[1], interval[1]);
            }
        }
        return res;
    }
};
