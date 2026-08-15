class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapst, mapts;

        for(int i =0; i<s.length(); i++){
            char c= s[i], d=t[i];

            if((mapst.count(c) && mapst[c]!=d)|| (mapts.count(d)&&         
                mapts[d]!=c)){
                    return false;
            }
            mapst[c]=d;
            mapts[d]=c;
        }
        return true;
    }
};