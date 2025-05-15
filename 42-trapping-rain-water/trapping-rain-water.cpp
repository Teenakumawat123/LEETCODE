class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>lmax(n,0);
        vector<int>rmax(n,0);
        lmax[0]=height[0];
        rmax[n-1]=height[n-1];
        //for left maximum
        for(int i=1;i<n;i++){
            lmax[i]=max(height[i],lmax[i-1]);
        }
        //right maximum
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(height[i],rmax[i+1]);
        }
        int water=0;
        for(int i=0;i<n;i++){
            water+=min(rmax[i],lmax[i])-height[i];
        }
        return water;
    }
};