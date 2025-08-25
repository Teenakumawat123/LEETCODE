class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        map<int,vector<int>>mp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>ans;
        for(auto &x:mp){
            if(x.first%2==0){
              reverse(x.second.begin(),x.second.end());
            }
            for(int ele :x.second){
                ans.push_back(ele);
            }
        }
        return ans;
    }
};