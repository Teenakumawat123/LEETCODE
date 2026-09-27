class Solution {
public:
    string reverseParentheses(string s) {
         int n=s.size();
         int i=0;
         stack<char>st;
         for(char c:s){
            if(st.size()==0) st.push(c);
            else if(c=='(') st.push(c);
            else if(c==')'){
                string t="";
                while(st.size()>0 && st.top()!='('){
                    t+=st.top();
                    st.pop();
                }
                st.pop();
                for(char ch:t){
                     st.push(ch);
                }
            }
            else st.push(c);
         }
         string ans="";
         while(st.size()!=0){
            ans+=st.top();
            st.pop();
         }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};