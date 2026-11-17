class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        
        //finding pivot index
        int idx=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        //sort after pivot
        reverse(nums.begin()+idx+1,nums.end());

        //just greater element 
        int mx=-1;
        for(int i=idx+1;i<n;i++){
            if(nums[i]>nums[idx]){
                mx=i;
                break;
            }
        }
        //swap
        int temp=nums[idx];
        nums[idx]=nums[mx];
        nums[mx]=temp;
    }
};