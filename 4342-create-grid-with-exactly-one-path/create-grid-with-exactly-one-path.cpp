class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>ans;
        for(int i=0;i<m;i++){
            string s="";
            for(int j=0;j<n-1;j++){
                if(i==0) s+='.';
                else s+='#';
            }
            s+='.';
            ans.push_back(s);
        }
        return ans;
    }
};