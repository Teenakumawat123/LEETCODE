class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp;
        for(int i=0;i<word.size();i++){
            mp[word[i]]=i;
        }
        int c=0;
        for(auto p:mp){
            if(p.first>='a' && p.first<='z'){
                if(mp.find(p.first-32)!=mp.end()) c++;
            }
        }
        return c;
    }
};