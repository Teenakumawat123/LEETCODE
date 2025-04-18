class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string s= countAndSay(n-1);
        string s1="";
        int count=1;
        for(int i=0;i<s.size();i++){
            // int count=1;
            char ch=s[i];
            if(s[i]==s[i+1]) count++;
            else{
            s1+=(to_string(count)+ch); count=1;}
        }
        return s1;
    }
};