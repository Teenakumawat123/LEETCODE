class Solution {
public:
    string invert(string s){
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') s[i]='1';
            else s[i]='0';
        }
        return s;
    }
    char findKthBit(int n, int k) {
       string s="0";
       for(int i=2;i<=n;i++){
        string a=invert(s);
        reverse(a.begin(),a.end());
        s+='1';
        s+=a;
       }
       cout<<s;
       return s[k-1]; 
    }
};