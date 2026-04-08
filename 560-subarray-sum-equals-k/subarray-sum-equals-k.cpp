class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
       unordered_map<int,int>mp;
       mp[0]=1;
       int count =0;
       int sum=0;
       for(int x:nums){
          sum+=x;
          if(mp.find(sum-k)!=mp.end()) count+=mp[sum-k];
          mp[sum]++;
       }
       return count;
    }
};