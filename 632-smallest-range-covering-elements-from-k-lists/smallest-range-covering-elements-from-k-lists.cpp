class Solution {
public:
    typedef pair<int,pair<int,int>>pip;
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<pip,vector<pip>,greater<pip>>pq;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i][0]);
            pq.push({nums[i][0],{i,0}});
        }
        int st=pq.top().first;
        int ed=mx;

        while(true){
           int row=pq.top().second.first;
           int col=pq.top().second.second;
           if(col==nums[row].size()-1) break;
           mx=max(mx,nums[row][col+1]);
           pq.pop();
           pq.push({nums[row][col+1],{row,col+1}});
           int mn=pq.top().first;
           if(mx-mn<ed-st){
            st=mn;
            ed=mx;
           }
        }
        return {st,ed};
    }
};