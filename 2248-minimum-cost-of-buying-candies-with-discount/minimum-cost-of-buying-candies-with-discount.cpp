class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        if(n==1) return cost[0];
        sort(cost.begin(),cost.end());
        int c=0;
        for(int i=n-1;i>=0;i-=3){
            if(i==0) c+=cost[i];
            if(i>=1) c+=(cost[i]+cost[i-1]);
        }
        return c;
    }
};