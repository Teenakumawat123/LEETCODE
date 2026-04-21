class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        for(int i = 0; i < nums1.size(); i++) {
            int lo = i, hi = nums2.size() - 1;

            while(lo <= hi) {
                int mid = lo + (hi - lo) / 2;

                if(nums2[mid] >= nums1[i]) {
                    ans = max(ans, mid - i);
                    lo = mid + 1;   // move right
                } else {
                    hi = mid - 1;
                }
            }
        }
        return ans;
    }
};