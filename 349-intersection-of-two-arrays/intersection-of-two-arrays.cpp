class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int>mp;
       int i=0;
       for(int x:nums1){
        mp[x]=i++;
       }
       set<int>s;
       for(int p:nums2){
        if(mp.find(p)!=mp.end()) s.insert(p);
       }
       vector<int>ans;
       for(int x:s){
        ans.push_back(x);
       }
       return ans;
    }
};