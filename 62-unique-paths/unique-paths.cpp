class Solution {
public:
    // int helper(int sr,int sc,int er,int ec,vector<vector<int>>&dp){
    //     if(sr>er || sc>ec) return 0;
    //     if(sr==er && sc==ec) return 1;
    //     if(dp[sr][sc]!=-1) return dp[sr][sc];
    //     int down=helper(sr+1,sc,er,ec,dp);
    //     int right=helper(sr,sc+1,er,ec,dp);
    //     dp[sr][sc]=right+down;
    //     return dp[sr][sc];
    // }

    int uniquePaths(int m, int n) {

        //  vector<vector<int>>dp(m,vector<int>(n,-1));
        //  return helper(0,0,m-1,n-1,dp);

        // tabulation method 
        vector<vector<int>>dp(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0) dp[i][j]=1;
                else dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};