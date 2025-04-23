class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //by using inbuilt function 
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        return nums[k-1];
    }
};