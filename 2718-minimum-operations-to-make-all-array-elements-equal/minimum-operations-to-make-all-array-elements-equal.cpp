class Solution {
public:
    vector<long long> minOperations(vector<int>& nums,vector<int>& queries) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        vector<long long> arr(nums.begin(), nums.end());

        for(int i=1;i<n;i++)
            arr[i] += arr[i-1];

        vector<long long> ans;

        for(int q : queries){

            int lo = 0, hi = n-1;
            int idx = -1; // last position < q

            while(lo <= hi){
                int mid = lo + (hi-lo)/2;

                if(nums[mid] < q){
                    idx = mid;
                    lo = mid + 1;
                }
                else{
                    hi = mid - 1;
                }
            }

            if(idx == -1){
                ans.push_back(arr[n-1] - 1LL*q*n);
            }
            else{
                long long left =
                    1LL*q*(idx+1) - arr[idx];

                long long right =
                    (arr[n-1]-arr[idx])
                    - 1LL*q*(n-idx-1);

                ans.push_back(left + right);
            }
        }

        return ans;
    }
};