class Solution {
public:
    int gcd(int a, int b){
    while(b){
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}
    long long gcdSum(vector<int>& nums) {
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            if(i>0) maxi=max(maxi,nums[i]);
            nums[i]=gcd(nums[i],maxi);
        }
        ranges::sort(nums);
        int i=0;
        int j=nums.size()-1;
        long long sum=0;
        while(i<j){
            sum+=gcd(nums[i],nums[j]);
            i++;
            j--;
        }
        return sum;
    }
};