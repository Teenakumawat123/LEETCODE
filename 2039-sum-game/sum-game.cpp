class Solution {
public:
    bool sumGame(string num) {
      int n=num.size();  
      //int c=0;
      int ls=0;//left sum
      int rs=0;//right sum
      int lc=0,rc=0;

      for(int i=0;i<n;i++){

        if(num[i]!='?' && i<n/2) ls+=(num[i]-48);
        if(num[i]!='?' && i>=n/2) rs+=(num[i]-48);

        if(num[i]=='?' && i<n/2) lc++;
        if(num[i]=='?' && i>=n/2) rc++;

      }
cout<<ls<<" "<<rs;
        
        int totalQnMarks = lc + rc;
        if(totalQnMarks % 2 == 1) { //Odd - alice always wins
            return true;
        }

        int LEFT = 2 * ls + 9*lc;

        int RIGHT = 2 * rs + 9*rc;

        if(LEFT == RIGHT) //Bob wins
            return false;

        return true;
    }
};