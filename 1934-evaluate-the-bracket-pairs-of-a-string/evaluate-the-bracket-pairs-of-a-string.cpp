class Solution {
public:
    string evaluate(string s, vector<vector<string>>& kn) {
        unordered_map<string,string>mp;
        for(int i=0;i<kn.size();i++){
            mp[kn[i][0]]=kn[i][1];
        }

        //my approach 
        // string res="";
        
        // for(int i=0;i<s.size();i++){
        //     if(s[i]>='a' && s[i]<='z') res+=s[i];
        //     else{
        //        int j = i + 1;

        //         while(s[j] != ')') {
        //             j++;
        //         }
        //       string r = s.substr(i + 1, j - i - 1);
        //         i=j;
        //         if(mp.find(r)!=mp.end()) res=res+mp[r];
        //         else res=res+"?";
        //     }
        // }
        // return res;

        //optimized approach

         bool addKey = false;
        string key, res;
        for (char c : s) {
            if (c == '(') {
                addKey = true;
            } else if (c == ')') {
                if (mp.count(key) > 0) {
                    res += mp[key];
                } else {
                    res.push_back('?');
                }
                addKey = false;
                key.clear();
            } else if (addKey) {
                key.push_back(c);
            } else {
                res.push_back(c);
            }
        }
        return res;
    }
};