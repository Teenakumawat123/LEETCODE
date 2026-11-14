class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0,ans=0;

        // //row wise
        // for(int i=0;i<m;i++){
        //      cnt=0;
        //     for(int j=0;j<n;j++){
        //        if(grid[i][j]==1) cnt++;
        //     }
        //     if(cnt>1) ans+=cnt;
        // }

        // //column wise

        // for(int j=0;j<n;j++){
        //     cnt=0;
        //     for(int i=0;i<m;i++){
        //         if(grid[j][i]==1) cnt++;
        //     }
        //     if(cnt>1) ans+=(cnt-1);
        // }

      vector<int>r(m,0),c(n,0);

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1){
                r[i]++;
                c[j]++;
            }
        }
      }

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1){
                if(r[i]>1 || c[j]>1) ans++;
            }
        }
      }

        return ans;
    }
};