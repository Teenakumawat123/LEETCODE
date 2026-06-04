class Solution {
public:
    int totalWaviness(int n1, int n2) {
        if(n2<=100) return 0;
        if(n1>=1 && n2<=100) return 0;
        int w=0;
        for(int i=n1;i<=n2;i++){
            if(i>100){
                string s=to_string(i);
                for(int j=1;j<=s.size()-2;j++){
                    if(((s[j]-'0')>(s[j-1]-'0') && (s[j]-'0')>(s[j+1]-'0')) || ((s[j]-'0')<(s[j-1]-'0') && (s[j]-'0')<(s[j+1]-'0'))) w++;
                }
            }
        }
        return w;
    }
};