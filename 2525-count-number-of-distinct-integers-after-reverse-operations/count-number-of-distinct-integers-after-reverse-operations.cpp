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
          for(int i = 0; i < n; i++) {
           int rev = reverseN(nums[i]);
           nums.push_back(rev);
    }

        unordered_set<int> v;
        for(int i=0;i<nums.size();i++){
          v.insert(nums[i]);
        }
        return v.size();
    }
};