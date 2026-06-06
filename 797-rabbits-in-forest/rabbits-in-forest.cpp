class Solution {
public:
    int numRabbits(vector<int>& ans) {
        // set<int>s;
        // int res=0;
        // for(int x:ans){
        //     if(x==0) res++;
        //     else s.insert(x);
        // }
        // for(int p:s){
        //     res+=(p+1);
        // }
        // return res;

        vector<int>v(1000,0);
        int res=0;
        for(int x:ans)
        {
            if(x==0) res++;
            else {
                v[x]++;
            if(v[x]==x+1) {
                res+=v[x];
                v[x]=0;
             }
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]>0){
                res+=(i+1);
            }
        }
        return res;
    }
};