class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
      vector<int>suff(n);
      suff[n-1]=nums[n-1];
      for(int i=n-2;i>=0;i--){
         suff[i]=min(nums[i],suff[i+1]);
      }  
      int s=nums[0]-suff[0];
      if(s<=k) return 0;
      for(int i=1;i<n;i++){
        nums[i]=max(nums[i],nums[i-1]);
        s=nums[i]-suff[i];
        if(s<=k) return i;
      }
      return -1;
    }
};