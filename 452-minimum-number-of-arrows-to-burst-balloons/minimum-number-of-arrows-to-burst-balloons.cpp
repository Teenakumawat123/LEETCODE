bool cmp(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& intervals) {
        int n=intervals.size();
       int ans=0;
        sort(intervals.begin(),intervals.end(),cmp);
        int end=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=end){
                ans++;
            }
            else{
                end=intervals[i][1];
            }
        }
        return n-ans; 
    }
};