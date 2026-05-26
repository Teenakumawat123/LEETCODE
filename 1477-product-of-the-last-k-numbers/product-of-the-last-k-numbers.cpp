class ProductOfNumbers {
public:
   vector<int>pre;
   int p;
    ProductOfNumbers() {
        p=1;
    }
    
    void add(int num) {
       if(num==0){
        pre.clear();
        p=1;
       }
       else{p*=num;
       pre.push_back(p);}
    }
    
    int getProduct(int k) {
        if(k>pre.size()) return 0;
        if(k==pre.size()) return pre.back();
        return pre.back()/pre[pre.size()-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */