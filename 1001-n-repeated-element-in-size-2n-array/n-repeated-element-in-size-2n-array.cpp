class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int ele;
        for(auto p :mp){
            if(p.second==nums.size()/2){
                ele=p.first;
                break;
            }
        }
        return ele;
    }
};