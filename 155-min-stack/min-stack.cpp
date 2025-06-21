class MinStack {
public:
stack<long long>st;
long long mini;
    MinStack() {
        mini=LLONG_MAX;
    }
    
    void push(int val) {
        long long x=(long long)val;
        if(st.size()==0){
            st.push(x);
            mini=x;
        }
        else if(x>mini) st.push(x);
        else{
            st.push(2*x-mini);
            mini=x;
        }
    }
    
    void pop() {
    if(st.top()<mini){
        mini=2*mini-st.top();
    }
    st.pop();
    }
    
    int top() {
        if(st.top()<mini) return mini;
        return st.top();
    }
    
    int getMin() {
       return mini;
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