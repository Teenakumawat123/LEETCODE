class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int ans=0;
        int a=1;
        while(n!=0){
            int b=n&1;
            if(b==0) b=1;
            else b=0;
            ans+=(a*b);
            a*=2;
            n/=2;
        }
        return ans;
    }
};