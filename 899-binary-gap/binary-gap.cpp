class Solution {
public:
    int binaryGap(int n) {
       int count=0,ans=0;
       bool flag=false;
       while(n!=0){
        if(n&1==1){
         if(flag) ans=max(ans,count);
         count=0;
         flag=true;
        }
        count++;
        n/=2;
       } 
       return ans;
    }
};