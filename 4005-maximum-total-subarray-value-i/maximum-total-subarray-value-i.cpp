class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int x:nums){
            maxi=max(maxi,x);
            mini=min(mini,x);
        }
        long long total_val=((long long)(maxi-mini)*k);
        return total_val;
    }
};