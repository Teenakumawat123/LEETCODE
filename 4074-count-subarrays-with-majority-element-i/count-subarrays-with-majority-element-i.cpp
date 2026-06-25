class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int t) {
        //brute force
        int n=nums.size();
        int ans=0;
        //int ex=0;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=i;j<n;j++){
                if(nums[j]==t) c++;
                int len=j-i+1;
                if(c>len/2) ans++;
            }
        }
        return ans;
    }
};