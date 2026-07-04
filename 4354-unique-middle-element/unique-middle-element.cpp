class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int mid=nums[nums.size()/2];
        int c=0;
        for(int x:nums){
         if(x==mid) c++;
         if(c>1) return false;
        }
        return true;
    }
};