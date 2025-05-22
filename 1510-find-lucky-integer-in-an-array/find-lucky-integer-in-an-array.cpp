class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        int lucky_num=-1;
        for(auto x:mp){
            if(x.first==x.second) {
                lucky_num=max(lucky_num,x.first);
            }
        }
        return lucky_num;
    }
};