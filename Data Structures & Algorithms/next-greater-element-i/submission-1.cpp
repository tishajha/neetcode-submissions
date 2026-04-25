class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       vector<int>res(nums1.size(),-1);
       stack<int>st;
       unordered_map<int,int> mp;
       for(int i=0;i<nums1.size(); i++){
        mp[nums1[i]]=i;
       }
       for(int num:nums2){
        while(!st.empty() && num> st.top()){
            int val =st.top();
            st.pop();
            int ind= mp[val];
            res[ind]=num;
        }
        if(mp.find(num)!=mp.end()){
            st.push(num);
        }
       }
       return res;
    }
};