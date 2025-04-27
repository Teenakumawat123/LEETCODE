class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto t :mp){
          if(t.second>(n/3)) ans.push_back(t.first);
        }
        return ans;
    }
};