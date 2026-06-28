class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long sum=0;
        for(int i=n-1;i>=n-k;i--){
            if(mul!=0){
                long long ans=(nums[i]*1LL*mul);
                sum+=ans;
                mul--;
            }
            else sum+=(long long)nums[i];
        }
        return sum;
    }
};