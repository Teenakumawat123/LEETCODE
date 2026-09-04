class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>mini(n);
        mini[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
          mini[i]=min(nums[i],mini[i+1]);
        }
        int maxi=nums[0];
        int s=0;
        for(int i=0;i<n;i++){
          s=maxi-mini[i];
          if(i!=n-1) maxi=max(maxi,nums[i+1]);
          if(s<=k) {return i; break;}
        }
        return -1;
    }
};