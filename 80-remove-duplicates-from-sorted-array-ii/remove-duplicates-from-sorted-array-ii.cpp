class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0;
        int j=0;
        while(j<nums.size()){
            int count=1;
            while(j+1<nums.size() &&nums[j]==nums[j+1]){
                j++;
                count++;
            }
            int a=min(2,count);
            for(int i=0;i<a;i++){
                nums[l]=nums[j];
                l++;
            }
            j++;
        }
        return l;
    }
};