class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s= strs[0];
        
        for(int i=0; i<s.length(); i++){
            for(string &ss: strs){
                if(s[i]!= ss[i]){
                    return s.substr(0, i);
                }
            }
        }
        return s;
    }
};