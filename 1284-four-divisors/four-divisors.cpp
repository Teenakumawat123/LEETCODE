class Solution {
public:
int FourDiv(int x){
    if((int)sqrt(x)*(int)sqrt(x)==x) return 0;
    int a=0,count=0;
    for(int i=1;i<sqrt(x);i++){
        if(x%i==0){
           a+=i;
            a+=(x/i);
            count+=2;
        }
    }
    if(count==4) return a;
    else return 0;
}
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
           sum+=(FourDiv(nums[i]));
        }
        return sum;
    }
};