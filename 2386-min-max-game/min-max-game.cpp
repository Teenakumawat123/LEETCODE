class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        queue<int>q;
        for(int x:nums){
            q.push(x);
        }
        int c=0;
        while(q.size()>1){
            if(c%2==0){
                int a=q.front();
                q.pop();
                int b=q.front();
                q.pop();
                q.push(min(a,b));
                c++;
                if(q.size()==1) break;
            }
            else{
                int x=q.front();
                q.pop();
                int y=q.front();
                q.pop();
                q.push(max(x,y));
                c++;
                if(q.size()==1) break;
            }
        }
        return q.front();
    }
};