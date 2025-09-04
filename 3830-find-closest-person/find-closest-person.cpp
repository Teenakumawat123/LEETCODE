class Solution {
public:
    int findClosest(int x, int y, int z) {
        int speed1=abs(x-z);
        int speed2=abs(y-z);
        if(speed1==speed2) return 0;
        else if(speed1<speed2) return 1;
        else return 2;
    }
};