class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        string t="";
        int open=0;
        int close=0;
        for(char ch:s){
            t+=ch;
            if(ch=='(') open++;
            else close++;

            if(open==close && t.size()>=2){
              t.erase(0,1);
              t.erase(t.size()-1);
              ans=ans+t;
              t="";
            }

        }
        return ans;
    }
};