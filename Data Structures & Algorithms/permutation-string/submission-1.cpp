class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size()>s2.size()){
            return false;
        }
        int s1len=s1.size();
        int s2len=s2.size();
        vector<int> freq1(26,0);
        vector<int> freq2(26, 0);
        for(int i=0;i<s1len;i++){
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
       if(freq1==freq2){
        return true;
       }
        for(int r=s1len; r<s2len;r++){
            freq2[s2[r]-'a']++;
            freq2[s2[r-s1len]-'a']--;
            if(freq1==freq2){
                return true;
            }
        }
        return false;
    }
};
