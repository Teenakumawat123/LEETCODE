class MedianFinder {
public:
    priority_queue<int>l;
    priority_queue<int,vector<int>,greater<int>>r;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if (l.empty() || num <l.top())
        l.push(num);
        else
        r.push(num);
        if (l.size() > r.size() + 1 || r.size() > l.size() + 1){
         if(l.size()>r.size()){ r.push(l.top()); l.pop();}
         else{
            l.push(r.top());
            r.pop();
         }
       }
    }
    
    double findMedian() {
        if(l.size()>r.size()) return (double)l.top();
        else if(r.size()>l.size()) return (double)r.top();
        else return (l.top()+r.top())/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */