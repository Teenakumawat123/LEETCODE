class Solution {
public:
    int countCommas(int n) {
      if(n<1000) return 0;

      //case 1-> when the size of n=4;
      if(n>=1000){
        if((n/1000)==1) return (n%1000)+1;
        else return (((n/1000)-1)*1000 +(n%1000)+1);
      }
       return 0;
    }
};