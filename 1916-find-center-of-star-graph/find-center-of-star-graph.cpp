class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        unordered_map<int,int>mp;
        for(int i=0;i<e.size();i++){
            mp[e[i][0]]++;
            mp[e[i][1]]++;
        }
        int ans=INT_MIN;
        int res=INT_MIN;
        for(auto x:mp){
           if(ans<x.second) {
            res=x.first;
            ans=x.second;
           }
        }
        return res;
    }
};