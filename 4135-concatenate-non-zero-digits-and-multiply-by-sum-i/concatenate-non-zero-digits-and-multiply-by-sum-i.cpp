class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        long long x=0;
        long long sum=0;
        for(int i=0;i<s.size();i++){
            if((s[i]-48)>0) {
                x=x*10+(s[i]-48);
                sum+=(s[i]-48);
            }
        }
        x*=sum;
        return x;
    }
};