class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex;
        vector<vector<int>> v;
        for(int i=0;i<=n;i++){
            vector<int>a(i+1);
            v.push_back(a);
            for(int j=0;j<=i;j++){
                if(j==0 || j==i)
                v[i][j]=1;
                else
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
        return v[rowIndex];
    }
};