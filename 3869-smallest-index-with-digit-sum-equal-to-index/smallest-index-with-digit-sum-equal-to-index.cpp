class Solution {
public:
int digitsum(int x){
    int sum=0;
    string s=to_string(x);
    for(int i=0;i<s.size();i++){
     sum+=(s[i]-48);
    }
    return sum;
}
    int smallestIndex(vector<int>& nums) {
        int idx=INT_MAX;
        for(int i=0;i<nums.size();i++){
           int sum=digitsum(nums[i]);
           if(sum==i) idx=min(idx,i);
        }
        if(idx==INT_MAX) return -1;
        return idx;
    }
};