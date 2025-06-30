class MyQueue {
public:
stack<int>st;
stack<int>h;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        while(st.size()>0){
            h.push(st.top());
            st.pop();
        }
       int x=h.top();
       h.pop();
        while(h.size()>0){
            st.push(h.top());
            h.pop();
        }
        return x;
    }
    
    int peek() {
         while(st.size()>0){
            h.push(st.top());
            st.pop();
        }
        int x=h.top();
         while(h.size()>0){
            st.push(h.top());
            h.pop();
        }
        return x;
    }
    
    bool empty() {
        if(st.size()==0) return true;
        else return false ;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */