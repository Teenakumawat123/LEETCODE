class Solution {
public:
    int solve(int v1,int v2,string s){
        if(s=="+") return v1+v2;
        else if(s=="-") return v1-v2;
        else if(s=="*") return v1*v2;
        else return v1/v2;
    }
    int evalRPN(vector<string>& s) {
        int n=s.size();
        stack<int>st;
        for(int i=0;i<n;i++){
           if(s[i]!="+"&& s[i]!="-" && s[i]!="*" && s[i]!="/"){
             bool flag=false;
             int num=0;
            for(char c:s[i]){
                if(c=='-') flag=true;
                if(isdigit(c)) {
                  num=num*10+(c-48);
                }
            }
            if(flag) st.push(-num);
            else st.push(num);
           }
            else{
                int v2=st.top();
                st.pop();
                int v1=st.top();
                st.pop();
                int result=solve(v1,v2,s[i]);
                st.push(result);
            }
        }
        return st.top();
    }
};