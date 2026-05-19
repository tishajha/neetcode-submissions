class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        for(char ch:s){
            if(!ispunct(ch)&&!isspace(ch)){
                result+=tolower(ch);
            }
        }
        int len= result.length();
        for(int i=0; i<len/2;i++){
            if(result[i]!= result[len-i-1]){
                return false;
            }
        }
        return true;
    }
};
