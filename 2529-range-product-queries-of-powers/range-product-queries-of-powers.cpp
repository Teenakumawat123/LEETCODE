class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& q) {
        vector<int>ans;
        vector<int>p;
        int a=1;
        while(n){
            if(n%2!=0){
                p.push_back(a);
            }
            a*=2;
            n/=2;
        }
        for(int i=0;i<q.size();i++){
            long long s=1;
            for(int j=q[i][0];j<=q[i][1];j++){
               s=(s*p[j])%1000000007;
            }
            ans.push_back(s);
        }
        return ans;
    }
};