bool cmp(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        // if(n==1) return 0;
        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        // for(int i=0;i<n;i++){
        //     pq.push({intervals[i][0],intervals[i][1]});
        // }

        // int ans=0;
        // while(pq.size()!=0){
        //     auto f=pq.top();
        //     pq.pop();
        //     auto s=pq.top();
        //     pq.pop();
        //     if(s.first<f.second){
        //         ans++;
        //          pq.push({min(f.first,s.first),min(f.second,s.second)});
                
        //     }
        //     if(pq.size()==1) break;
        // }
        // return ans;

        int ans=0;
        sort(intervals.begin(),intervals.end(),cmp);
        int end=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<end){
                ans++;
            }
            else{
                end=intervals[i][1];
            }
        }
        return ans;
    }
};