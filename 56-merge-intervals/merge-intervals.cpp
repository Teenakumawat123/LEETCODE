class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intv) {
        int n=intv.size();
        if(n==1) return intv;
        priority_queue<pair<int ,int>,vector<pair<int ,int>>,greater<pair<int ,int>>>pq;
        //push all the interval into pq
        for(int i=0;i<n;i++){
            pq.push({intv[i][0],intv[i][1]});
        }

        vector<vector<int>>ans;

        while(pq.size()!=1){
          auto f=pq.top();//first interval
          pq.pop();
          auto s=pq.top();//second interval
          pq.pop();

          int e1=f.second;
          int s2=s.first;

          if(s2<=e1){
            pq.push({min(f.first,s2),max(e1,s.second)});
          }

          else{
            ans.push_back({f.first,f.second});
             pq.push({s.first,s.second});
          }
     
          if(pq.size()==1 || pq.size()==0) break;
        }

        if(pq.size()==1) {
            auto x=pq.top();
            ans.push_back({x.first,x.second});
        }

        return ans;
    }
};