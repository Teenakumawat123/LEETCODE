class Solution {
public:
    int findMin(vector<int>& nums) {
        // means we have to find pivot in this question 
        if(nums.size()==2){
            if(nums[0]<nums[1]) return nums[0];
            else return nums[1];
        }
        int lo=0;
        int hi=nums.size()-1;
         while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>nums[hi]) lo=mid+1;
            else hi=mid;
         }
         return nums[lo];
    }
};