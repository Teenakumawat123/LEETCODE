class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       /* int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target)
            return {i,j};
            } 
        }
        return {0};*/

        //using hash map
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            else mp[nums[i]]=i;
        }
        return ans;
    }
};