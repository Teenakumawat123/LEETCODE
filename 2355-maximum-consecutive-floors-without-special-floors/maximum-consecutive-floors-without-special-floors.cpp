class Solution {
public:
    int maxConsecutive(int b, int t, vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=nums[0]-b;
        for(int i=1;i<nums.size();i++){
            ans=max(ans,(nums[i]-nums[i-1]-1));
        }
        ans=max(ans,t-nums[nums.size()-1]);
        return ans;
    }
};