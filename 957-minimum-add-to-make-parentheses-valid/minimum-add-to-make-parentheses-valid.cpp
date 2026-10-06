class Solution {
public:
    int minAddToMakeValid(string s) {
        int no=0;//no. of open bracket
        int nc=0;//no. of close bracket
        int n=s.size();
        int ans=0;
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