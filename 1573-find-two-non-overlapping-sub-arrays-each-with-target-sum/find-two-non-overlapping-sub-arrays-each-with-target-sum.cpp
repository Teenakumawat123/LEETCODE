class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        
        vector<int> best(n, INT_MAX);
        
        int l = 0;
        int sum = 0;
        int ans = INT_MAX;
        int minLen = INT_MAX;

        for (int r = 0; r < n; r++) {
            sum += arr[r];

            while (sum > target) {
                sum -= arr[l];
                l++;
            }

            if (sum == target) {
                int len = r - l + 1;

                // Previous non-overlapping subarray
                if (l > 0 && best[l - 1] != INT_MAX) {
                    ans = min(ans, len + best[l - 1]);
                }

                minLen = min(minLen, len);
            }

            // Best subarray seen up to this index
            best[r] = minLen;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};