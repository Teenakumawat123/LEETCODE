class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        //using two hashmap
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int x:nums){
            mp1[x]++;
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
               mp2[nums[j]]++;
               if(mp1.size()==mp2.size()) ans++;
            }
            mp2.clear();
        }
        return ans;
    }
};