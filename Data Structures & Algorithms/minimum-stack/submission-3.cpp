class MinStack {
public:
    MinStack() {
        
    }
    vector<int> st;
    vector<int> minst;
    
    void push(int val) {
        st.push_back(val);

        if(minst.size()== 0 ||val< minst[minst.size()-1]){
            minst.push_back(val);
        }
        else{
            minst.push_back(minst[minst.size()-1]);
        }
    }
    
    void pop() {
        st.pop_back();
        minst.pop_back();
        
    }
    
    int top() {
        return st[st.size()-1];
        
    }
    
    int getMin() {
        return minst[minst.size()-1];
    }
};
