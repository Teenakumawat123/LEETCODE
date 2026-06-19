class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a=gain[0];
        gain[0]=0;
        int h=0;
        for(int i=1;i<gain.size();i++){
            int x=gain[i];
            gain[i]=gain[i-1]+a;
            h=max(h,gain[i]);
            a=x;
        }
        //cout<<a+gain.back();
        h=max(h,a+gain.back());
        return h;
    }
};