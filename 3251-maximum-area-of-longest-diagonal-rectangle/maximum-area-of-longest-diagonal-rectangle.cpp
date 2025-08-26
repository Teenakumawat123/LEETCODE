class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& di) {
        priority_queue<pair<int,int>>pq;
        for(vector<int> v :di){
            int diagonal_len=(v[0]*v[0])+(v[1]*v[1]);
            int area=v[0]*v[1];
            pq.push({diagonal_len,area});
        }
        return pq.top().second;
    }
};