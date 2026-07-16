class Solution {
public:
    int gcd(int a, int b){
        if(a==0) return b;
        else return gcd(b%a,a);
    }
    long long gcdSum(vector<int>& nums) {
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            if(i>0) maxi=max(maxi,nums[i]);
            nums[i]=gcd(min(nums[i],maxi),max(nums[i],maxi));
        }
        ranges::sort(nums);
        int i=0;
        int j=nums.size()-1;
        long long sum=0;
        while(i<j){
            sum+=gcd(min(nums[i],nums[j]),max(nums[i],nums[j]));
            i++;
            j--;
        }
        return sum;
    }
};