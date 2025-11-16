class Solution {
public:
    int numSub(string s) {
        int n=s.size();
        int mod=1000000007;
        int ans=0;
        for(int i=0;i<n;i++){
        long long c=0;
        while(i<n && s[i]=='1'){
            c++;
            i++;
        }
        ans+=(c*(c+1)/2)%mod;
        } 
        return ans;
    }
};