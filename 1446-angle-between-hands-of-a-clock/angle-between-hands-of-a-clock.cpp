class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour==12) hour=0;

        double a1=abs(hour*30-minutes*5.5);
        double a2=360-a1;

        return min(a1,a2);
    }
};