class Solution {
public:
    int minAddToMakeValid(string s) {
        int nc=0;//no. of close bracket
        stack<char>st;
        for(char c:s){
            if(c=='(') st.push(c);
            else{
                if(st.size()>0 && st.top()=='(') st.pop();
                else nc++;
            }
        }
        return st.size()+nc;
    }
};