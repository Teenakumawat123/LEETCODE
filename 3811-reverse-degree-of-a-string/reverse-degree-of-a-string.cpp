class Solution {
public:
    int reverseDegree(string s) {
        //int a=1;
        int ans=0;
        for(int i=0;i<s.size();i++){
         ans+=((122-s[i]+1)*(i+1));
        }
        return ans;
    }
};