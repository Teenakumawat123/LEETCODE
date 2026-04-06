class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
/*Pattern: Prefix Sum

Trigger:
- Need cumulative sum
- Repeated sum queries on array

Idea:
- nums[i] = nums[i] + nums[i-1]
- Convert array into running sum array
*/
       for(int i=1;i<nums.size();i++){
        nums[i]=nums[i]+nums[i-1];
       }
       return nums;
    }
};