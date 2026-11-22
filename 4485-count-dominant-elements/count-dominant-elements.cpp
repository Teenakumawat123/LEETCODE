class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        if(n==1) return 1;
        for(int i=0;i<n;i++){
            if(i==0) {
               if(nums[i]>=nums[i+1]) ans++;
            }
            else if(i==n-1){
                if(nums[i]>=nums[i-1]) ans++;
               }
            else{
                if(nums[i]>=((nums[i+1]+nums[i-1])/2.0)) ans++;
            }
        }
        return ans;
    }
};