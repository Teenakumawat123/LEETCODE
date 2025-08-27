class Solution {
public:
    typedef pair<int,string>pi;
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        for(string &s:nums){
            pq.push({s.size(),s});
            if(pq.size()>k) pq.pop();
        }
        return pq.top().second;
    }
};