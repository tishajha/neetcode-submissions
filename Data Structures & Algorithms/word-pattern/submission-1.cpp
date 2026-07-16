class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        string word;
        stringstream ss(s);
        while(ss>>word){
            words.push_back(word);
        }
        if(pattern.length()!= words.size()){
            return false;
        }

        unordered_map<char, string> chartoWord;
        unordered_map<string, char> wordtoChar;

        for(int i=0; i<pattern.length(); i++){
            char c= pattern[i];
            string& w=words[i];

            if(chartoWord.count(c)&& chartoWord[c]!=w){
                return false;
            }
            if(wordtoChar.count(w)&& wordtoChar[w]!=c){
                return false;
            }
            chartoWord[c]=w;
            wordtoChar[w]=c;
        }
        return true;
    }
};