class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        if(costs[0]>coins) return 0;
        int ice_bar=0;
        for(int i=0;i<costs.size();i++){
            if(costs[i]<=coins){
                ice_bar++;
                coins-=costs[i];
            }
            if(coins==0) break;
        }
        return ice_bar;
    }
};