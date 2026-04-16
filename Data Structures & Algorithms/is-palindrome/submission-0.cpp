class Solution {
public:
    bool isPalindrome(string s) {
        std::string result;

    for (char ch : s) {
        if (!std::ispunct(ch) && !std::isspace(ch)) {
            result += std::tolower(ch); // convert to lowercase and keep
        }
    }
    int n= result.length();
    for(int i=0;i<n/2;i++){
        if (result[i]!=result[n-i-1]){
            return false;
        }
    
    }
    return true;
    }
};
