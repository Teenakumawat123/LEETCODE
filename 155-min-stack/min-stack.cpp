class MinStack {
public:
stack<int>st;
stack<int>h;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(h.size()==0 || val<h.top()) h.push(val);
        else h.push(h.top());
    }
    
    void pop() {
        st.pop();
        h.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
       return h.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */