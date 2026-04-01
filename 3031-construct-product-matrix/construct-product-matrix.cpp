class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>pre(n,vector<int>(m));
        long long p=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
             pre[i][j] = p;
                p = (p * grid[i][j]) % 12345;
            }
        }
        p=1;
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int t = grid[i][j];
                grid[i][j] = (p * pre[i][j]) % 12345;
                p = (p * t) % 12345;
            }
        }
        return grid;
    }
};