class Solution {
public:
    int reverseN(int x){
        int ans=0;
        while(x>0){
            int rem=x%10;
            ans=(ans*10)+rem;
            x/=10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
       int n = nums.size();
       unordered_set<int> v;
          for(int i = 0; i < n; i++) {
           int rev = reverseN(nums[i]);
           nums.push_back(rev);
           v.insert(nums[i]);
           v.insert(rev);
    }
        return v.size();
    }
};