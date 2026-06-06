class Solution {
public:
    string repeatLimitedString(string s, int rL) {
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        priority_queue<pair<char,int>>pq;
        for(auto x:mp){
            pq.push(x);
        }
        string res="";
        while(pq.size()>0){
            auto largest=pq.top();
            pq.pop();
            if(largest.second<=rL){
                for(int i=0;i<largest.second;i++){
                    res+=largest.first;
                }
            }
           else{
               for(int i=0;i<rL;i++){
                    res+=largest.first;
                }
                if(pq.empty()) break; // if second largest does not exist

                auto sec_largest=pq.top();
                pq.pop();

                res+=sec_largest.first;

                pq.push({largest.first,largest.second-rL});
                if((sec_largest.second-1)>0) pq.push({sec_largest.first,sec_largest.second-1});
           }
        }
      return res;
    }
};