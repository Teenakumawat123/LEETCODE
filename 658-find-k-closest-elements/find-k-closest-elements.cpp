class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
         priority_queue<pair<int,int>>pq;
        vector<int>ans;
        for(int ele:arr){
            int dis=abs(x-ele);
            pq.push({dis,ele});
            if(pq.size()>k) pq.pop();
        }
        while(pq.size()>0){
           ans.push_back(pq.top().second);
           pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};