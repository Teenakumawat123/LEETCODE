class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=n-1;i>=2;i--){
            int c=nums[i];
            int b=nums[i-1];
            int a=nums[i-2];
         if(a+b>c) return a+b+c;
        }
       return 0; 
    }
};