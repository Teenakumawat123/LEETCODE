class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
       vector<int>rows(m,0);
       vector<int>col(n,0);
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1) rows[i]++;
        }
       }

       for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            if(grid[i][j]==1) col[j]++;
        }
       }
       for(int i=0;i<rows.size();i++){
        cout<<rows[i];
       }
       for(int i=0;i<col.size();i++){
        cout<<col[i];
       }
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            grid[i][j]=(rows[i]+col[j]-(n-rows[i])-(m-col[j]));
        }
       }
       return grid;
    }
};