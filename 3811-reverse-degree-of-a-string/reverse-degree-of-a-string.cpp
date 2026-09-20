class Solution {
public:
    int reverseDegree(string s) {
        int a=1;
        int ans=0;
        for(int i=0;i<s.size();i++){
            cout<<((122-s[i]+1)*a);
         ans+=((122-s[i]+1)*a);
         a++;
        }
        return ans;
    }
};