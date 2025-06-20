class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        /*int a=INT_MIN;
        if(nums[0]>a && nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2] && nums[n-1]>a) return n-1;
        int idx=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                idx=i;
            }
        } 
        return idx;
        */


        //using binary search

        int lo=0;
        int hi=n-1;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>nums[mid+1]) hi=mid;
            else lo=mid+1;
        }
        return lo;
    }
};