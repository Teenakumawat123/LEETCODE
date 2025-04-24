class Solution {
public:
int rev(int x){
    int ans=0;
    while(x>0){
        int rem=x%10;
        ans=(ans*10)+rem;
        x/=10;
    }
    return ans;
}
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        int x=1000000007;
        int count=0;
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++){
        nums[i]=nums[i]-rev(nums[i]);
       }
       for(int i=0;i<n;i++){
        count=(count+mp[nums[i]])%x;
        mp[nums[i]]++;
       }
        return count;
    }
};