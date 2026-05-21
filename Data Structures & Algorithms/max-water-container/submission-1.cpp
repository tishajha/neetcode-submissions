class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res=INT_MIN;
        int n= heights.size();
        for(int i=0; i<n;i++){
            for(int j=n-1; j>=0;j--){
                int height=min(heights[i], heights[j]);
                int weidth= j-i;
                int area= height*weidth ;
                res=max(res, area);
            }
        }
        return res;
        
    }
};
