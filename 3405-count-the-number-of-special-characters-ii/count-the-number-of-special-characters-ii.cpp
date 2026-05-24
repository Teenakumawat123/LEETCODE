class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp;
        int c=0;
        for(int i=0;i<word.size();i++){
            if(word[i]>='a' && word[i]<='z'){
                    mp[word[i]]=i;
            }
            if(word[i]>='A' && word[i]<='Z'){
                if(mp.find(word[i])==mp.end()){
                    mp[word[i]]=i;
                }
            }
        }
        for(auto p:mp){
            if(p.first>='a' && p.first<='z'){
                if(mp.find(p.first-32)!=mp.end()){
                    if(mp[p.first]<mp[p.first-32]) c++;
                }       
            }
        }
        
        return c;
    }
};