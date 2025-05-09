class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long n = nums.size();
        long long i = 0, j = 0;
        long long count = 0, original_ans = 0;
        int max_Val = *max_element(nums.begin(), nums.end());

        while (j < n) {
            if (nums[j] == max_Val) {
                count++;
            }

           
            while (count >= k) {
                original_ans += (n - j);
                if (nums[i] == max_Val) {
                    count--;
                }
                i++;
            }

            j++;
        }

        return original_ans;
    }
};