class Solution {
public:
   int reverse(int x){
    int ans=0;
    while(x>0){
     int rem=x%10;
     ans=(ans*10)+rem;
     x/=10;
    }
    return ans;
   }
   bool isPrime(int n) {
    if(n<=1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
    }
    int sumOfPrimesInRange(int n) {
        int rev=reverse(n);
        int l=min(n,rev);
        int r=max(n,rev);
        int sum=0;
        for(int i=l;i<=r;i++){
            if(isPrime(i)) sum+=i;
        }
        return sum;
    }
};