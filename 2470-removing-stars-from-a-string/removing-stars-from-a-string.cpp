class Solution {
public:
    string removeStars(string s) {
        if(s.size()==0) return "";
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*') st.push(s[i]);
            else{//s[i]=='*'
            st.pop();
            }
        }
        if(st.size()==0) return "";
        string result="";
        while(st.size()>0){
            char ch=st.top();
            result+=ch;
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};