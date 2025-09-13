class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>v,c;
        for(char ch:s){
            if(ch=='a' || ch=='e'||ch=='i'||ch=='o' ||ch=='u') v[ch]++;
            else c[ch]++;
        }
        priority_queue<int>pq1,pq2;
        for(auto x:v){
            pq1.push(x.second);
        }
        for(auto p:c){
            pq2.push(p.second);
        }
       if(pq1.size()!=0 && pq2.size()!=0) return pq1.top()+pq2.top();
       else if(pq1.size()==0 && pq2.size()==0) return 0;
       else if(pq1.size()==0) return pq2.top();
       else return pq1.top();
    }
};