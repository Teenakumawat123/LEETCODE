class Solution {
public:
    bool hasAlternatingBits(int n) {
       int pre=2;
       bool last;
       while(n!=0){
        last=n&1;
        if(pre==last) return false;
        n=n>>1;
        pre =last;
       } 
       return true;
    }
};