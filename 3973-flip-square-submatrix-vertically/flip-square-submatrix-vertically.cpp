class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int f1=x;
        int f2=x+k-1;
        for(int j=y;j<=y+k-1;j++){
            while(f1<f2){
                swap(grid[f1][j],grid[f2][j]);
                f1++;
                f2--;
            }
            f1=x;
            f2=x+k-1;
        }
        return grid;
    }
};