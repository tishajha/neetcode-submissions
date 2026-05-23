class MinStack {
    vector<int> values;
    vector<int> mins;
public:
    MinStack() {
        mins = {INT_MAX};
    }
    
    void push(int val) {
        values.push_back(val);
        mins.push_back(min(mins.back(), val));
    }
    
    void pop() {
        values.pop_back();
        mins.pop_back();
    }
    
    int top() {
        return values.back();
    }
    
    int getMin() {
        return mins.back();
    }
};
