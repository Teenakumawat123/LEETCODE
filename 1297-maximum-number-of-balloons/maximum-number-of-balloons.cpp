class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(char c:text){
            mp[c]++;
        }
        int a=min({mp['b'],mp['a'],mp['n']});
        int b=min(mp['l'],mp['o']);
        if(mp['l']>=a*2 && mp['o']>=a*2) return a;
        else return b/2;

    }
};