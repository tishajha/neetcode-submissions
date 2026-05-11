class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
       vector<int>set(26,0);
       int n= s.size();
       for(int i=0; i<n;i++){
            set[s[i]-'a']++;
            set[t[i]-'a']--;
       }
       for(auto val:set){
        if(val!=0){
            return false;
        }
       }
       return true;
    }
};
