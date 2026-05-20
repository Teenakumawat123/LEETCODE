class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]=i;
        }
        int mini=INT_MAX;
        for(int x:nums2){
            if(mp.find(x)!=mp.end()){
                mini=min(mini,x);
            }
        }
        return mini==INT_MAX?-1:mini;
    }
};