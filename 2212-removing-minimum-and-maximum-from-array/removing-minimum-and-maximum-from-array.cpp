class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        int  min_pos,max_pos;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
             if(nums[i]<mini){
                min_pos=i;
                mini=nums[i];
             }
             if(nums[i]>maxi){
                max_pos=i;
                maxi=nums[i];
             }
        }
        mini=min(min_pos,max_pos);
        maxi=max(min_pos,max_pos);
        int ans=min(maxi+1,min(n-mini,((mini+1)+(n-maxi))));
        return ans;
    }
};