class Solution {
public:
    bool isPalindrome(string s) {
        string ss;
        for(char ch:s)
        {
            if(!ispunct(ch)&& !isspace(ch))
                ss+= tolower(ch);
        }
        
        int n= ss.length();
        for(int i=0; i<n/2; i++){
            if(ss[i]!= ss[n-i-1]){
                return false;
            }
        }
        return true;
    }
};
