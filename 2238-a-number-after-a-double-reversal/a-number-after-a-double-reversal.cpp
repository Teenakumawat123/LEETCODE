class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0) return true;
        string s=to_string(num);
        if(s[s.size()-1]=='0') return false;
        else return true;
    }
};