class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        if(mp.size()==1) return 1;
        priority_queue<pair<int,int>>pq;
        for(auto p:mp){
            pq.push({p.second,p.first});
        }
        int n=arr.size();
        int size=0;
        int ans=0;
        while(pq.size()!=0){
            size+=pq.top().first;
            pq.pop();
            if(size<n/2) ans++;
            else{
                if(size>=n/2) ans++;
                break;
            }
        }
        return ans;
    }
};