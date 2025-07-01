class Solution {
public:
    string predictPartyVictory(string s) {
        queue<int>q;
        queue<int>d;
        queue<int>r;
        int n=s.size();
        for(int i=0;i<n;i++){
            q.push(i);
            if(s[i]=='R') r.push(i);
            else d.push(i);
        }
        while(q.size()>1){
            if(s[q.front()]=='X') q.pop();
            else if(s[q.front()]=='R'){
                if(d.size()==0) return "Radiant";
                s[d.front()]='X';
                d.pop();
                r.push(r.front());
                r.pop();
                q.push(q.front());
                q.pop();
            }
            else{
                if(r.size()==0) return "Dire";
                s[r.front()]='X';
                r.pop();
                d.push(d.front());
                d.pop();
                q.push(q.front());
                q.pop();
            }
        }
        if(r.size()==0) return "Dire";
        else return "Radiant";
    }
};