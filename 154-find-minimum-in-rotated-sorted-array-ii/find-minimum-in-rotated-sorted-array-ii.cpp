class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int leader=nums[n-1];
        for(int i=nums.size()-1;i>=0;i--){
         if(nums[i]<leader){
            leader=nums[i];
         }
        }
        return leader;
    }
};