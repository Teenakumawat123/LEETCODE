class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        //we can apply brute force approach because constraints are small
        int count=0;
        for(int i=0;i<nums.size();i++){
            long long sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                long long d=sum;
                int last=d%10;
                d/=10;
                while(d>9){
                  d/=10;
                }
                int first=d;
                if(d==0) first=last;
                if((first==x) && (last==x)) count++;
            }
        }
        return count;
    }
};