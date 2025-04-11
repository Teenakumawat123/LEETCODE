class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()==1) return 0;
        sort(nums.begin(),nums.end());
        int maxd=0;
        for(int i=1;i<nums.size();i++){
            int diff=nums[i]-nums[i-1];
            maxd=max(maxd,diff);
        }
        return maxd;
    }
};