bool cmp(vector<int>& a, vector<int>& b){
         return a[1]>b[1];
    }
class Solution {
public:
    int maximumUnits(vector<vector<int>>& bT, int tS) {
        sort(bT.begin(),bT.end(),cmp);
        int n=bT.size();
        int p=0;//profit
        for(int i=0;i<n;i++){
          if(bT[i][0]<=tS){
            p+=(bT[i][0]*bT[i][1]);
            tS-=bT[i][0];
          }
          else{
            p+=(tS*bT[i][1]);
            tS=0;
          }
          if(tS==0) break;
        }
        return p;
    }
};