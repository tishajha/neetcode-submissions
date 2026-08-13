class Solution {
public:
    double myPow(double x, int n) {
        double ans=0; 
        if(n==0){
            return 1.0;
        }
        ans= myPow(x,n/2);
        if(n%2==0){
            return ans*ans;
        }
        else {
            if(n>0){
                return ans*ans*x;

            }
            else {
                return ans*ans/x;
            }
        }
    }
};
