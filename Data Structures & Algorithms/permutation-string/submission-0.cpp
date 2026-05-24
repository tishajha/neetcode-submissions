class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size()>s2.size()){
            return false;
        }
        int s1len=s1.size();
        int s2len=s2.size();
        sort(s1.begin(), s1.end());
        int l=0;
        for(int r=0; r<s2len;r++){
            string sub=s2.substr(r,s1len);
            sort(sub.begin(), sub.end());
            if(sub==s1){
                return true;
            }
        }
        return false;
    }
};
