class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> map;
        int l=0, maxf=0, res=0;
        for(int r=0; r<s.length(); r++){
            map[s[r]]++;
            maxf= max(maxf,map[s[r]]);
            while((r-l+1)-maxf>k){
                map[s[l]]--;
                l++;
            }
            res=max(maxf, r-l+1);
        }
        return res;
    }
};
