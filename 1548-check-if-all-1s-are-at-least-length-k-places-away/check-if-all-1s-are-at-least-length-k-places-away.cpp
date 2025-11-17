class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) ans.push_back(i);
        }
        for(int i=1;i<ans.size();i++){
             if((ans[i]-ans[i-1]-1)<k) return false;
        }
        return true;
    }
};