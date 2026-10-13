class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        priority_queue<long long>pq;
        priority_queue<long long,vector<long long>,greater<long long>>pq1;
       int n=nums.size();
       if(n==1) return (nums[0]*nums[0]);
        for(int x:nums){
            pq.push(abs((long long)x));
            pq1.push(abs((long long)x));
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                sum+=(pq.top()*pq.top());
                pq.pop();
            }
            else{
                sum-=(pq1.top()*pq1.top());
                pq1.pop();
            }
        }
        return sum;
    }
};