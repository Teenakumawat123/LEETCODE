class Solution {
public:
    string processStr(string s) {
        string res="";
        for(char ch:s){
            if(ch>='a' && ch<='z') res+=ch;
            else if(!res.empty() && ch=='*') res.pop_back();
            else if(!res.empty() && ch=='#'){
                res+=res;
            }
            else{
                reverse(res.begin(),res.end());
            }
        }
        return res;
    }
};