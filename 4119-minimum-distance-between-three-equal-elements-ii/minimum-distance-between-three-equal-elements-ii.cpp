class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int dis=INT_MAX;
        for(auto x:mp){
            vector<int>v=x.second;
            if(v.size()>=3){
                for(int i=0;i<v.size()-2;i++){
                    dis=min(dis,(abs(v[i]-v[i+1])+abs(v[i+1]-v[i+2])+abs(v[i+2]-v[i])));
                }
            }
        }
        return dis==INT_MAX?-1:dis;
    }
};