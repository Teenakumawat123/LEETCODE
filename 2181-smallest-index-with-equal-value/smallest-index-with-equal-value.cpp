class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int a=i%10;
            if(a==nums[i]) return i;
        }
        return -1;
    }
};