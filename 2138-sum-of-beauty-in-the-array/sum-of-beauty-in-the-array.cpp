class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size();
        vector<int>r(n);
        r[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
           r[i]=min(nums[i],r[i+1]);
        }
        int sum=0;
        int l=nums[0];
        for(int i=1;i<=n-2;i++){
           if(nums[i]>l && nums[i]<r[i+1]) sum+=2;
           else if(nums[i]>nums[i-1] && nums[i]<nums[i+1]) sum+=1;
           else sum+=0;
           l=max(l,nums[i]);
        }
        return sum;
    }
};