class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1) return false;
       stack<char>st;
       bool f=0;
       for(char c:s){
        if(c=='(' || c=='[' || c=='{') st.push(c);
        else{
            if(c==')'){
              if(st.size()>0 && st.top()=='(') st.pop();
              else return false;
            }

            else if(c=='}'){
              if(st.size()>0 && st.top()=='{' ) st.pop();
              else return false;
            }

            else if(c==']'){
              if( st.size()>0 && st.top()=='[') st.pop();
              else return false;
            }
        }
       } 
       if(st.size()>0) return false;
       return true;
    }
};