class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st ;
        vector<int>res;
        int n= temperatures.size();
        for(int i=0;i<n;i++){
            int count=1;
            int j=i+1;
            while(j<n){
                if(temperatures[j]>temperatures[i]){
                    break;
                }
                j++;
                count++;
            }
            count = (j == n) ? 0 : count;
            res.push_back(count);
        }
        return res;
        
    }
};
