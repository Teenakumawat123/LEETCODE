class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int h=0;
        int a=0;
        for(int i=0;i<gain.size();i++){
            a+=gain[i];
            h=max(h,a);
        }
        return h;
    }
};