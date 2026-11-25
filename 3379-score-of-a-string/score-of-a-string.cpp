class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        for(int i=1;i<s.size();i++){
            ans+=abs((s[i]-48)-(s[i-1]-48));
        }
        return ans;
    }
};