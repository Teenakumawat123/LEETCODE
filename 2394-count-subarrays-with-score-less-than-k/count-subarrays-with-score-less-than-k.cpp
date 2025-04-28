class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        long long int sum=0,ans=0,score=0;
         int i=0,j=0;
        while(j<n){
            sum+=nums[j];
            score=sum*(j-i+1);
            while(i<=j && score>=k){
                sum-=nums[i];
                i++;
                score=sum*(j-i+1);
            }
            ans+=(j-i+1);
            j++;
        }
        return ans;
    }
};