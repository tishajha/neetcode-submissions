class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0, k=0; int n= chars.size();
        while(i<n){
            chars[k++]= chars[i];
            int j= i+1;
            while(j<n && chars[j]==chars[j-1]){
                j++;
            }
            if(j-i>1){
                for(char c: to_string(j-i)){
                    chars[k++]= c;
                }
            }
            i=j;
        }
        
        return k;
    }
};