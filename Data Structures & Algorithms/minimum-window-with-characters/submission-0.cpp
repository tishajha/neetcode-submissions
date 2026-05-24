class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int>mp;
        for(char c:t){
            mp[c]++;
        }
        int required=t.size();
        int start=0, l=0;
        int minlen=INT_MAX;
        for(int r=0;r<s.size();r++){
            if(mp[s[r]]>0){
               
                required--;
            }
             mp[s[r]]--;
            while(required==0){
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    start=l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0){
                    required++;
                }
                l++;
            }
        }
        if(minlen==INT_MAX){
            return "";
        }
        return s.substr(start, minlen);
        
    }
};
