class Solution {
public:
    int maxDepth(string s) {
        int ans=INT_MIN;
        stack<char>st;
        for(char c:s){
            if(c==')'){
                ans=max(ans,(int)st.size());
                if(st.size()>0) st.pop();
            }
            else{
                if(c=='(') st.push(c);
            }
        }
        return ans==INT_MIN?0:ans;
    }
};