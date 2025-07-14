class Solution {
public:
    long long power(long long a,long long b){
        if(b==0) return 1;
        long long half=power(a,b/2);
        long long ans=(half*half)%1000000007;
        if(b%2==1){
            ans=(ans*a)%1000000007;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long even=power(5,(n+1)/2);
        long long odd=power(4,n/2);
        return (even*odd)%1000000007;
    }
};