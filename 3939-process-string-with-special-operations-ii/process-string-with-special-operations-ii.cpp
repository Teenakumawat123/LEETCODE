class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();
        long long l = 0;
        for(int i = 0; i < n; i++){
            if(s[i] >= 'a' && s[i] <= 'z') l++;
            else if(s[i]=='%') continue;
            else if(s[i]=='*' && l > 0) l--; 
            else if(s[i]=='#') l*=2;
        }
        if(k>=l) return '.';
        for(int i = n-1; i >= 0; i--){
            if(s[i]=='*'){
                l++;
            }
            else if(s[i]=='%'){
                k = l-k-1;
            }
            else if(s[i]=='#'){
                l/=2;
                if(k >= l) k = k-l;
            }
            else{
                l--;
                if(l == k) return s[i];
            }
        }
        return '.';
    }
};