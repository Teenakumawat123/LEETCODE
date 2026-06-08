class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(int x:nums){
            if(x>0) pos.push_back(x);
            else neg.push_back(x);
        }
        int idx=0;
       for(int i=0;i<pos.size();i++){
        nums[idx]=pos[i];
        nums[idx+1]=neg[i];
        idx+=2;
       }
       return nums;
    }
};