class Solution {
public:
    int helper(vector<int>&cost,int i,vector<int>&dp){
        if(i==0 || i==1) return cost[i];
        if(dp[i]!=-1) return dp[i];
        int sum1=helper(cost,i-1,dp);
        int sum2=helper(cost,i-2,dp);
        // if(dp[i]!=-1) return dp[i];
        dp[i]=cost[i]+min(sum1,sum2);
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        return min(helper(cost,n-1,dp),helper(cost,n-2,dp));
    }
};