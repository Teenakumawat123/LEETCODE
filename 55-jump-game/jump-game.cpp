class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(nums[0]<0) return false;
        int a=0;
        for(int i=0;i<n;i++){
            if(i>a) return false;
         a=max(a,i+nums[i]);
         if(a>=n-1) return true;
        }
        return false;
    }
};