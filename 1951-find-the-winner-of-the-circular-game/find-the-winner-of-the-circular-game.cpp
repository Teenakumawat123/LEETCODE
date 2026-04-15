class Solution {
public:
    int findTheWinner(int n, int k) {
        if(k==1) return n;
        queue<int>q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        int count=1;
        while(q.size()!=1){
            if(count==k){ q.pop(); count=1;}
            int x=q.front();
            q.pop();
            count++;
            q.push(x);
        }
        return q.front();
    }
};