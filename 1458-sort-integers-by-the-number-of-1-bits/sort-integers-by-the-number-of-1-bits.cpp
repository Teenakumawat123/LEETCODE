class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>>mp;
        for(int x:arr){
         int a = __builtin_popcount(x);;
         mp[a].push_back(x);
        }
        vector<int>ans;
        for(auto p :mp){
            sort(p.second.begin(),p.second.end());
            for(int a:p.second){
                ans.push_back(a);
            }
        }
        return ans;
    }
};