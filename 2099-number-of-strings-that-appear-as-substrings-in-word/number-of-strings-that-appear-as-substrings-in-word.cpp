class Solution {
public:
    int numOfStrings(vector<string>& p, string w) {

        //brute force
        int c=0;
        for(int i=0;i<p.size();i++){
            for(int j=0;j<w.size();j++){
                string s=w.substr(j,p[i].size());
                if(s==p[i]){ c++; break;}
            }
        }
        return c;
    }
};