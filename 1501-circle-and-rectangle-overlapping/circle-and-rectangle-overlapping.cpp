class Solution {
public:
    bool checkOverlap(int r, int xc, int yc, int x1, int y1, int x2, int y2) {
       int xi,yi;

       //for xi
       if(x1>xc) xi=x1;
       else if(xc>x2) xi=x2;
       else xi=xc;

       //for yi

       if(y1>yc) yi=y1;
       else if(yc>y2) yi=y2;
       else yi=yc;

       int d=sqrt((xc-xi)*(xc-xi)+(yc-yi)*(yc-yi));

       return d<=r;
    }
};