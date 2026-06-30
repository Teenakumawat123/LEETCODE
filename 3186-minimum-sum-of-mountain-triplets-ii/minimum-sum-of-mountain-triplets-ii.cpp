class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>r(n);
        r[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            r[i]=min(nums[i],r[i+1]);
        }
        int sum=INT_MAX;
        int l_min=nums[0];
        for(int i=1;i<n-1;i++){
            if(l_min<nums[i] && r[i+1]<nums[i]){
                sum=min(sum,(l_min+nums[i]+r[i+1]));
            }
            l_min=min(l_min,nums[i]);
        }
        return sum==INT_MAX?-1:sum;
    }
};