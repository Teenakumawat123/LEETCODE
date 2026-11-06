class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int cnt = 0;
        if(n==1) return nums[0];
        for (int x : nums) {
            if (x < 0)
                cnt++;
        }

        long long ans = 1;
        bool selected = false;

        int limit = cnt;

        if (cnt % 2 == 1)
            limit = cnt - 1;

        // Multiply selected negative numbers
        for (int i = 0; i < limit; i++) {
            ans *= nums[i];
            selected = true;
        }

        // Multiply positive numbers
        for (int i = cnt; i < n; i++) {
            if (nums[i] > 0) {
                ans *= nums[i];
                selected = true;
            }
        }

        // If nothing non-zero was selected,
        // we can choose 0.
        if (!selected)
            return 0;

        return ans;
    }
};