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

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;
        int dis=INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.count(nums[i])) {
                dis = min(dis, i - mp[nums[i]]);
            }
            mp[rev(nums[i])] = i;
        }
        return dis==INT_MAX ? -1 : dis;
    }
};