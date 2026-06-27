class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        vector<int>right(nums.size());
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
           right[i]=min(nums[i],right[i+1]);
        }
        int left=nums[0];
        for(int i=0;i<n;i++){
            if(left<=right[i+1]) return i+1;
            left=max(left,nums[i+1]);
        }
        return 1;
    }
};