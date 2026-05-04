class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i>j)
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int k=0;k<n;k++){
           int i=0;
           int j=n-1;
            while(i<j){
                int t=matrix[k][i];
                matrix[k][i]=matrix[k][j];
                matrix[k][j]=t;
                i++;
                j--;
            }
        }
    }
};