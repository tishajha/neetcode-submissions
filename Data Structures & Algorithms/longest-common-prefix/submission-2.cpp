class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // string result="";
        string s=strs[0];
        for(int i=0; i<s.length();i++){
            for(const string &str:strs){
                if(s[i]!=str[i]){
                    return s.substr(0,i);
                }
            }
        }
        return s;
    }
};