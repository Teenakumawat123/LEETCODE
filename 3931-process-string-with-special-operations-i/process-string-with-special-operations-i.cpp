class Solution {
public:
    string processStr(string s) {
        string res="";
        for(char ch:s){
            if(ch>='a' && ch<='z') res+=ch;
            else if(!res.empty() && ch=='*') res.pop_back();
            else if(!res.empty() && ch=='#'){
                res+=res;
            }
            else{
                int i=0;
                int j=res.size()-1;
                while(i<j){
                    swap(res[i],res[j]);
                    i++;
                    j--;
                }
            }
        }
        return res;
    }
};