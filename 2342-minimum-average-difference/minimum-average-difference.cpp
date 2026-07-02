class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        vector<long long>v(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            v[i]+=v[i-1];
        }
        int min_avg=INT_MAX;
        int ans;
        int diff;
        for(int i=0;i<n;i++){
            if(i==n-1) diff=abs(v[i-1]/(i)-(v[v.size()-1]-v[i-1])/(n-i));
            else diff=abs(v[i]/(i+1)-(v[v.size()-1]-v[i])/(n-i-1));
            if(diff<min_avg){
                min_avg=diff;
                ans=i;
            }
        }
        diff=v[n-1]/n;
        if(diff<min_avg) ans=n-1;
        return ans;
    }
};