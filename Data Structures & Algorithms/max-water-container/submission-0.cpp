class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res=0 ; 
        int n = heights.size();
        for (int i =0;i<n;i++){
            for (int j=n-1; j>=0;j--){
                int height= min(heights[i], heights[j]);
                int width= j-i;
                res= max(res, height*width);

            }
        }
        return res;
    }
};
