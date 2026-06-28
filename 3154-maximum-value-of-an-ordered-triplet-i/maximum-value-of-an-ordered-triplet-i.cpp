class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    long long v=1LL*(nums[i] - nums[j]) * 1LL*nums[k];
                    sum=max(sum,v);
                }
            }
        }
        return sum;
    }
};