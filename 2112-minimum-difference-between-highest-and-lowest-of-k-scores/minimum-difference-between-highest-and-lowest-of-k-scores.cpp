class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        int j=k-1;
        int diff=INT_MAX;
        while(j<n){
          diff=min(diff,(nums[j++]-nums[i++]));
        }
        return diff;
    }
};