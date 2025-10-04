class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxw=0;//contain max water
        while(left<right){
            int w=right-left;//width
            int h=min(height[left],height[right]);//height
            int currentW=w*h;
            maxw=max(maxw,currentW);
            height[left]<height[right]?left++:right--;
        }
        return maxw;
    }
};