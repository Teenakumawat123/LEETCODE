class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        priority_queue<pair<int,vector<int>>>pq;
        for(int i=0;i<arr.size();i++){
            int dis=(arr[i][0]*arr[i][0])+ (arr[i][1]*arr[i][1]);
            pq.push({dis,arr[i]});
            if(pq.size()>k) pq.pop();
        }
        vector<vector<int>>ans;
        while(pq.size()>0){
           ans.push_back(pq.top().second);
           pq.pop();
        }
        return ans;
    }
};