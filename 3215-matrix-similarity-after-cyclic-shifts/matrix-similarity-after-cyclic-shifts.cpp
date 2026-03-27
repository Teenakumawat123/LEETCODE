class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        int nos=k%n;
        if(nos==n) return true;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i%2==0){
                    if(mat[i][j]!=mat[i][(j+nos)%n]) return false;
                }
                else{
                    if(mat[i][j]!=mat[i][(j-nos+n)%n]) return false;
                }
            }
        }
        return true;
    }
};