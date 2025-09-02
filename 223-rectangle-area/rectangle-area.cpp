class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1=abs(ax2-ax1)*abs(ay2-ay1);
        int area2=abs(bx2-bx1)*abs(by2-by1);

        //overlap area
        //finding length on x-axis
        int xl=max(ax1,bx1);
        int xr=min(ax2,bx2);
        int len=xr-xl;

        //finding width on y-axis
        int yl=max(ay1,by1);
        int yr=min(ay2,by2);
        int wid=yr-yl;
       
        int overlap_area=0;
        if(len>0 && wid>0) overlap_area=len*wid;

        int total=area1+area2-overlap_area;

        return total;
    }
};