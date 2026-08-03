class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int x=0,y=0;
            for(int j=i;j<n;j++){
              if(nums[j]%2==0) x++;
              if(nums[j]%2!=0) y++;
              if(y>0 && ((x * b) <= (a * y))) cnt++;
            }
        }
        return cnt;
    }
};