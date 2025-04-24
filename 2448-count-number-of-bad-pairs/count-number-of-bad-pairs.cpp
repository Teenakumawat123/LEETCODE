class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n=nums.size();
        long long goodpair=0;
        unordered_map<long long,long long>mp;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]-i;
        }
        for(long long i=0;i<nums.size();i++){
           goodpair=goodpair+mp[nums[i]];
           mp[nums[i]]++;
        }
       long long total=(n)*(n-1)/2;
       return (total-goodpair);
    }
};