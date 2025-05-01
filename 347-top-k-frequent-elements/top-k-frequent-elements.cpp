class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<pair<int,int>>freq;
       for(auto p:mp){
        freq.push_back({p.second,p.first});
       }
       //sort in descending order
       sort(freq.rbegin(),freq.rend());

      vector<int>ans;
       for(int i=0;i<k;i++){
       ans.push_back(freq[i].second);
       } 
        return ans;
    }
};