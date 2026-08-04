class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int l=INT_MAX;
        int r=INT_MIN;
        unordered_map<int,int>mp;
        for(int x:nums){
            l=min(l,x);
            r=max(r,x);
            mp[x]++;
        }
        vector<int>ans;
        for(int i=l;i<=r;i++){
            if(mp.find(i)==mp.end()) ans.push_back(i);
        }
        return ans;
    }
};