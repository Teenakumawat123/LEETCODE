class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       if(nums.size()==2) return nums;
       unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int>ans;
        for(auto x:mp){
            if(x.second==2) ans.push_back(x.first);
        }
        return ans;
    }
};