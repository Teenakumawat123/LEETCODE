class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int a=nums[0];
        int b=nums[n-1];
        int c=1;
        for(int i=min(a,b);i>=1;i--){
            if(a%i==0&&b%i==0){
                c=i;
                break;
            }
        }
        return c;
    }
};