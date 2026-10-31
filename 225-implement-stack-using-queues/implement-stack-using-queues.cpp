class MyStack {
public:
    queue<int>q;
    //queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        if(q.size()==0) return -1;
        int x;
        for(int i=1;i<q.size();i++){
            x=q.front();
            q.pop();
            q.push(x);
        }
        x=q.front();
        q.pop();
        return x;
    }
    
    int top() {
         int x;
        for(int i=1;i<q.size();i++){
            x=q.front();
            q.pop();
            q.push(x);
        }
        x=q.front();
        q.pop();
        q.push(x);
        return x;
    }
    
    bool empty() {
        if(q.size()==0) return true;
        else return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */