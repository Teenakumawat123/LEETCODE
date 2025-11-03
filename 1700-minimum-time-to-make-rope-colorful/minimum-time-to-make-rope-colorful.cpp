class Solution {
public:
    int minCost(string c, vector<int>& nt) {
        int n=c.size();
        int i=0,j=0;
        int min_time=0;
        while(i<n && j<n){
         int t=0,c_max=0;
         while(j<n && c[i]==c[j]){
            t+=nt[j];
            c_max=max(c_max,nt[j]);
            j++;
         }
         min_time+=(t-c_max);
         i=j;
        }
        return min_time;
    }
};