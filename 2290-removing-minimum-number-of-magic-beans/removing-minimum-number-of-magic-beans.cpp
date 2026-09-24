class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
         //1 4 5 6
         int n=beans.size();
         sort(beans.begin(),beans.end());
         vector<long long> v(beans.begin(), beans.end());
         for(int i=1;i<n;i++){
            v[i]=(long long)(v[i]+v[i-1]);
         }
         long long ans=LLONG_MAX;
         for(int i=1;i<n;i++){
            int t=beans[i];
            ans=min(ans,(long long)(v[i-1] +((v[n-1]-v[i])-((long long)beans[i])*(n-i-1))));
         }
         ans=min(ans,(long long)(v[n-1]-((long long)beans[0]*n)));
         return ans;
    }
};