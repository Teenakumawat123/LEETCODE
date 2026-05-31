class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mp;
        while(n>0){
            int x=n%10;
            mp[x]++;
            n/=10;
        }
        int s=0;
        for(auto p:mp){
            s+=(p.first*p.second);
        }
        return s;
    }
};