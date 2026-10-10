class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single_digit_sum=0;
        int double_digit_sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10) single_digit_sum+=nums[i];
            else double_digit_sum+=nums[i];
        }
        if(single_digit_sum>double_digit_sum || double_digit_sum>single_digit_sum) return true;
        else return false;
    }
};