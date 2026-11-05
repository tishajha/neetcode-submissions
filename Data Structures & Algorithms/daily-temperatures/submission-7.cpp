class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n= temperatures.size();
        vector<int> result(n, 0);
        stack<pair<int, int>> st;
        for(int i=0; i< temperatures.size(); i++){
            int t= temperatures[i];
            while(!st.empty() && t> st.top().first){
                auto pairs = st.top();
                st.pop();
                result[pairs.second]= i - pairs.second;
            }
            st.push({t,i});
        }
        return result;
    }
};
