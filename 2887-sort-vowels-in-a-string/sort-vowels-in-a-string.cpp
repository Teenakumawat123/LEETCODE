class Solution {
public:
    string sortVowels(string s) {
        vector<char>v;
        vector<int>idx;
        for(int i=0;i<s.size();i++){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                v.push_back(s[i]);
                idx.push_back(i);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            s[idx[i]]=v[i];
        }
        cout<<s;
        return s;
    }
};