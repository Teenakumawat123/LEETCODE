class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size()==0) return "";
        if(s.size()==1) return s;
        stack<char>st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(st.size()>0 && st.top()==s[i]) st.pop();
            else st.push(s[i]);
        }
        if(st.size()==0) return "";
        string res="";
        while(st.size()>0){
          res+=st.top();
          st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};