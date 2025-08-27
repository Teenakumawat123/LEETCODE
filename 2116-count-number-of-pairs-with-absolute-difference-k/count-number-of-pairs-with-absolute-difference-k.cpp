class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int c=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                int dif=abs(nums[i]-nums[j]);
                if(dif==k) c++;
            }
        }
        return c;
    }
};