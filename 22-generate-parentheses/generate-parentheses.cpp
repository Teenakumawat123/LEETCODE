class Solution {
public:
    void generate(vector<string>&ans,string s,int ob,int cb,int n){
        if(ob==n && cb==n){
            ans.push_back(s);
            return ;
        }
       
       if(ob<n) generate(ans,s+'(',ob+1,cb,n);
       if(cb<ob) generate(ans,s+')',ob,cb+1,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        generate(ans,"",0,0,n);
        return ans;
    }
};