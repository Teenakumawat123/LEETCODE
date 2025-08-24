class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0) return false;
        int group=n/k;
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto p:mp){
            int freq=p.second;
            if(freq>group) return false;
        }
        return true;
    }
};