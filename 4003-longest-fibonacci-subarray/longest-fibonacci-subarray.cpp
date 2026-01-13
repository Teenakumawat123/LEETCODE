class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int length=2;
        int max_len=2;
        for(int i=2;i<nums.size();i++){
            if(nums[i]==nums[i-1]+nums[i-2]) length++;
            else length=2;
            max_len=max(length,max_len);
        }
        if(max_len>length) return max_len;
        return length;
    }
};