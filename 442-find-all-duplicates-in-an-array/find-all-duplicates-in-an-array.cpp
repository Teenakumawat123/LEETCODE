class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return {};
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto p:mp){
            if(p.second>1) ans.push_back(p.first);
        }
        return ans;
    }
};