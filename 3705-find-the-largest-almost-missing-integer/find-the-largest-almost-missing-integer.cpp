class Solution {
public:
    int check(vector<int>& nums,int x,int k){
        int n=nums.size();
        int c=0;
        for(int i=0;i<n-k+1;i++){
            bool f=0;
            for(int j=i;j<i+k;j++){
                if(nums[j]==x) f=1;
            }
            if(f) c++;
        }
        return c;
    }
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        //if(k==1) return -1;
        vector<int>v=nums;
        ranges::sort(v);
        int ans=-1;
        for(int x:v){
           int a= check(nums,x,k);
           if(a>1) continue;
           ans=max(ans,x);
        }
        return ans;
    }
};