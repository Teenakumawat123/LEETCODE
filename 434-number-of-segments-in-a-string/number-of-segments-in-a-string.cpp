class Solution {
public:
    int countSegments(string s) {
        vector<string>v;
        stringstream ss(s);
        string t;
        while(ss>>t){
            v.push_back(t);
        }
        return v.size();
    }
};