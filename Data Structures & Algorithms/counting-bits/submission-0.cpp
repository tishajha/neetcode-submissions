class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1); 
        ans[0]=0; 
        int i=1; 
        while(i<=n){ 
            ans[i]=ans[i/2]+i%2; 
            i++; 
        
        } return ans;
    }
};
