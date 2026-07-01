class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        //prefix array
        int n=nums.size();
        vector<long long>v(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            v[i]+=v[i-1];
        }
        int cnt=0;
        for(int i=0;i<n-1;i++){
            if(v[i]>=(v[n-1]-v[i])) cnt++;
        }
        return cnt;
    }
};