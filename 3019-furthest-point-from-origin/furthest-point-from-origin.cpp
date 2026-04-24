class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
       int c1=0,c2=0,c3=0;
       for(int i=0;i<moves.size();i++){
        if(moves[i]=='_') c1++;
        else if(moves[i]=='L') c2++;
        else c3++;
       } 
       int dis=abs(c2-c3)+c1;
       return dis;
    }
};