class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        //create right max array
        vector<int>v(n);
        v[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            v[i]=max(nums[i],v[i+1]);
        }
        int s=INT_MIN;//store max sum
        for(int i=0;i<n-k;i++){
            s=max(s,(nums[i]+v[i+k]));
        }
        return s;
    }
};