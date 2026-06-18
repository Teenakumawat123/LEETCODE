class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour==12) hour=0;
        double h1=hour;
        double m=minutes;

        double a1=abs(h1*30-m*5.5);
        double a2=360-a1;

        return min(a1,a2);
    }
};