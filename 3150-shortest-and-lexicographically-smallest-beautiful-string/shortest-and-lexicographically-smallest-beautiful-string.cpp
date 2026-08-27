class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
       int n=s.size();
       int prev=INT_MAX;
       int len=0;
       string ans="";
       for(int i=0;i<n;i++){
           int  j=i;
           string r="";
           int cnt=0;
           while(j<n){
            r+=s[j];
            if(s[j]=='1') cnt++;
            if(cnt==k){
                len=j-i+1;
            if (len < prev || (len == prev && r < ans)) {
                ans = r;
                prev = len;
             }
            }
            if(cnt>k) break;
            j++;
           }
       }
       return ans;
    }
};