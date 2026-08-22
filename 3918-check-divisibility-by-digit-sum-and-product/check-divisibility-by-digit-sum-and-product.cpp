class Solution {
public:
    bool checkDivisibility(int n) {
        int num=n;
        int p=1;
        int s=0;
        while(n){
            s+=(n%10);
            p*=(n%10);
            n/=10;
        }
        if(num%(s+p)==0) return true;
        else return false;
    }
};