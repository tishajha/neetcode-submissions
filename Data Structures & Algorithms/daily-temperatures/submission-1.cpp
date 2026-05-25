class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st ;
        
        int n= temperatures.size();
        vector<int>res(n,0);
        // for(int i=0;i<n;i++){
        //     int count=1;
        //     int j=i+1;
        //     while(j<n){
        //         if(temperatures[j]>temperatures[i]){
        //             break;
        //         }
        //         j++;
        //         count++;
        //     }
        //     count = (j == n) ? 0 : count;
        //     res.push_back(count);
        // }
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()]<= temperatures[i]){
                st.pop();
            }
            if(!st.empty()){
                res[i]= st.top()-i;
            }
            st.push(i);
        }
        return res;
        
    }
};
