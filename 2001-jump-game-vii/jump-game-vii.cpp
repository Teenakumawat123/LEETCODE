class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        if(s[s.size()-1]=='1')return false;
        int n=s.size();
        queue<int>q;
        vector<bool>vis(s.size(),false);
        q.push(0);
        vis[0] = true;
        int maxreach = 0;
        while(!q.empty()){
            int idx = q.front();
            q.pop();
            if(idx==n-1)return true;  
            for(int j = max(maxreach,idx+minJump); j<=(min(idx+maxJump,n-1));j++){
                if(!vis[j] && s[j]=='0') {
                    q.push(j);
                    vis[j] = true;
                }
            }
            maxreach = (min(idx+maxJump,n-1))+1;
        }
        return false;
    }
};