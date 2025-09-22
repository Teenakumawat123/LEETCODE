class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        priority_queue<int>pq;
        for(auto p:mp){
            pq.push(p.second);
        }
        int ele=pq.top(),count=0;
        while(pq.size()>0 && pq.top()==ele){
           count+=pq.top();
           pq.pop();
        }
        return count;
    }
};