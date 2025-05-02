class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(int ele:nums){
          s.insert(ele);
        }
        nums.clear(); //clear the original nums
        for(auto p:s){
           nums.push_back(p);
        }
        return nums.size();
    }
};