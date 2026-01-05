class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n =matrix.size();
        int mini=INT_MAX;
        int cnt=0;
        long long matrix_sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix_sum+=abs(matrix[i][j]);
                if(matrix[i][j]<0){
                    mini=min(mini,abs(matrix[i][j]));
                    cnt++;
                }
                mini=min(mini,abs(matrix[i][j]));
            }
        }
        cout<<matrix_sum;
        cout<<mini;
        if(cnt%2==0) return matrix_sum;
        else return matrix_sum-2*mini;
    }
};