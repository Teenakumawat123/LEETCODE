class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0;
        int a=nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            a=max(a,sum);
            if(sum<0){
                sum=0;
                // a=max(a,sum);
            }
        }
        return a;
    }
};