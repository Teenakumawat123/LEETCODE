class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        int cnt=0;
        int ans=0;
        int i=0;
        while(i<s.size()){
            if(s[i]=='(') cnt++;
            else{
                if(cnt>0){
                    if(s[i+1]==')') i++;
                    else{
                        ans++;
                    }
                    cnt--;
                }
                else{
                    ans++;
                    if(s[i+1]==')') i++;
                    else{
                        ans++;
                    }
                }
            }
            i++;
        }
        if(cnt>0) ans+=(cnt*2);
        return ans;
    }
};