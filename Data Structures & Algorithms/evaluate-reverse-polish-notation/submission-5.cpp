class Solution {
public:
    bool isoperator (string s){
        return (s=="+")||(s=="-")||(s=="/")||(s=="*");
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for( int i =0; i<tokens.size(); i++){
            string s= tokens[i];
            if(!isoperator(s)){
                st.push(stoi(s));
            }
            else {
                int a= st.top();
                st.pop();
                int b= st.top();
                st.pop();
                if(s=="+"){
                    int sum= b+a;
                    st.push(sum);
                }
                else if(s=="-"){
                    int dif= b-a;
                    st.push(dif);
                }
                else if(s=="/"){
                    int div= b/a;
                    st.push(div);
                }
                else {
                    int mult= b*a;
                    st.push(mult);
                }
            }
        }
        return st.top();
        
    }
};
