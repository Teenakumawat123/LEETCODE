class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        //brute force
        int dis=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                dis=min(dis,abs(i-start));
            }
        } 
        return dis;
    }
};