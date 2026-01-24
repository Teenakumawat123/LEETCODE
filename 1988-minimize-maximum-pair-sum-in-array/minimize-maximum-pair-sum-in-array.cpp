class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int max_pair_sum=0;
        while(i<j){
         max_pair_sum=max(max_pair_sum,(nums[i]+nums[j]));
         i++;
         j--;
        }
        return max_pair_sum;
    }
};