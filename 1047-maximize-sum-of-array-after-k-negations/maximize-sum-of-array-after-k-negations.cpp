class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int x:nums) pq.push(x);
        while(k>0){
            int t=pq.top();
            pq.pop();
            if(t==0) break;
            else if(t<0) {pq.push(abs(t));k--;}
            else {pq.push(-t);k--;}
        }
        int sum=0;
        while(pq.size()>0){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};