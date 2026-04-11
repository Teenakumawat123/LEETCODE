class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        //suffix sum
        int n=s.size();
        s[n-1]=(s[n-1]-97+shifts[n-1])%26+97;
        for(int i=n-2;i>=0;i--){
            shifts[i]=(shifts[i]+shifts[i+1])%26;
            s[i]=(s[i]-97+shifts[i])%26+97;
        }
        return s;
    }
};