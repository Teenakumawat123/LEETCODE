class Solution {
public:
    long long minimumCost(int c1, int c2, int cb, int n1, int n2) {
        long long ans=0;
        if(cb<(c1+c2)){
           long long a=min(n1,n2);
           ans+=(long long)(a*(long long)cb);
           if(n1>n2){
            ans+=(long long)((long long)(n1-n2)*(long long)min({c1,cb}));
           }
           else{
            ans+=(long long)((long long)(n2-n1)*(long long)min({c2,cb}));
           }
        }
        else{
            ans+=(long long)((long long)n1*(long long)c1);
            ans+=(long long)((long long)n2*(long long)c2);
        }
        return ans;
    }
};