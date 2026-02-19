class Solution {
public:
int solve(vector<int>&nums,int i,int n,vector<int>&dp){
    if(i>=n) return 0;
    if(dp[i]!=-1) return dp[i];
    int steal=nums[i]+solve(nums,i+2,n,dp);
    int skip=solve(nums,i+1,n,dp);
    dp[i]=max(steal,skip);
    return dp[i];
}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return solve(nums,0,nums.size(),dp);
    }
};