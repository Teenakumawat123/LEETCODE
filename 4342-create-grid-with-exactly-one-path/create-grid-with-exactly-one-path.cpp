class Solution {
public:
    vector<string> createGrid(int m, int n) {
        // vector<string>ans;
        // for(int i=0;i<m;i++){
        //     string s="";
        //     for(int j=0;j<n-1;j++){
        //         if(i==0) s+='.';
        //         else s+='#';
        //     }
        //     s+='.';
        //     ans.push_back(s);
        // }
        // return ans;

        vector<string> ans(m, string(n, '#'));//this syntax will make one grid of size m*n .

        ans[0] = string(n, '.');   //this will change first row into "...."

        for (int i = 0; i < m; i++) {
            ans[i].back() = '.'; //this will change last column into '.' this char.
        }
        return ans;
    }
};