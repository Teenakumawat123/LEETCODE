class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second%k==0){
                for(int i=0;i<x.second;i++){
                    sum+=x.first;
                }
            }
        }
        return sum;
    }
};