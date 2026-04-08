class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        /*
        Pattern: Prefix Sum + HashMap

        Trigger:
        - Count subarrays with given sum
        - Repeated sum queries

        Idea:
        - If prefix[r] - prefix[l-1] = k
        - Then prefix[l-1] = prefix[r] - k
        - Use hashmap to track previous prefix sums
        */
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