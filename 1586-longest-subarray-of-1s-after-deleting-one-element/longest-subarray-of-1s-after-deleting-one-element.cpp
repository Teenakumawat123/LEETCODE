class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int maxlen=0;
        int k=0;
        while(j<n){
           if(nums[j]==0){ k++;}
           while(k>1){
            if(nums[i]==0){k--;}
            i++;
           // maxlen=max(maxlen,j-i);
           }
            maxlen=max(maxlen,j-i);
           j++;
        }
         //maxlen=max(maxlen,j-i-1);
        return maxlen;
    }
};