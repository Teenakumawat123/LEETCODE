class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        long long sum=0,c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                sum+=grid[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                c+=grid[i][j];
                if(2*c==sum && j==n-1) return true;
            }
        }
        c=0;
        for(int j=0;j<n;j++){
            for(int i=0;i<m;i++){
                c+=grid[i][j];
                if(2*c==sum && i==m-1) return true;
            }
        }
        return false;
    }
};