class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int l=0;
        int r=0;
        int i=0;
        int j=n-1;
        int ans=INT_MAX;
        while(i<n){
            l+=nums[i];
            r+=nums[j];
            //0 1 2 3 4
            if(l==x) ans=min(ans,i+1);
            if(r==x) ans =min(ans,n-j);
            i++;
            j--;
        }

        l=0;
        r=0;
        for(int i=0;i<n;i++) nums.push_back(nums[i]);
        for(int i=0;i<2*n;i++){
        r+=nums[i];
        while(r>x){
            r-=nums[l];
            l++;
        }
        if(i>=n && r==x  && l<=n && i-l+1<=n){
            ans=min(ans,i-l+1);
        } 
        }
        return ans==INT_MAX?-1:ans;
    }
};