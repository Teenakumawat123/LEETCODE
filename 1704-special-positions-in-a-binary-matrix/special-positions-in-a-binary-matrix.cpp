class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> row(m, 0);
        vector<int> col(n, 0);

        // Count zeros in rows
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 0)
                    row[i]++;
            }
        }

        // Count zeros in columns
        for(int j = 0; j < n; j++){
            for(int i = 0; i < m; i++){
                if(mat[i][j] == 0)
                    col[j]++;
            }
        }

        int ans = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 1){
                    if(row[i] == n-1 && col[j] == m-1)
                        ans++;
                }
            }
        }

        return ans;
    }
};