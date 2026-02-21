class Solution {
public:
    int set_bits(int n){
        int count=0;
        while(n!=0){
            n=n&n-1;
            count++;
        }
        return count;
    }
    bool isprime(int n){
        if(n<=1) return false;
        bool flag=true;
        for(int i=2;i<=n/2;i++){
            if(n%i==0) flag=false;
        }
        return flag;
    }
    int countPrimeSetBits(int left, int right) {
       int count=0;
       for(int i=left;i<=right;i++){
        int a=set_bits(i);
        if(isprime(a)) count++;
       }
       return count;
    }
};