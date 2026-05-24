class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<int>st;
        for(int i=0; i<token.size(); i++){
            if((token[i]=="+"||token[i]=="*"||token[i]=="-"||token[i]=="/")){
                int a= st.top();
                st.pop();
                int b= st.top();
                st.pop();
                int ans;
                if(token[i]=="+"){
                    ans= a+b;
                }
                else if(token[i]=="-"){
                    ans= b-a;
                }
                else if(token[i]=="*"){
                    ans= a*b;
                }
                else {
                    ans= b/a;
                }
                st.push(ans);
            }
            else {
            st.push(stoi(token[i]));
            }
        }
        return st.top();
    }
};
