class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int x:nums){
            maxi=max(maxi,x);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=(maxi-nums[i]);
        }
        return ans;
    }
};