class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0];
        int idx=0;
        int ans=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>mn){
              ans=max(ans,(prices[i]-mn));
            }
            else{
                if(prices[i]<mn){
                    mn=prices[i];
                }
            }
        }
    //    int ans=INT_MIN;
    //    for(int i=0;i<prices.size();i++){
    //     if(i>idx){
    //         ans=max(ans,(prices[i]-mn));
    //     }
    //    }
    //    return ans==INT_MIN?0:ans;
    return ans;
    }
};