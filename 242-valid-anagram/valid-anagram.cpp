class Solution {
public:
    bool isAnagram(string s, string t) {
       /* sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
        return true;
        else
        return false;*/

        if(s.size()!=t.size()) return false;
        unordered_map<char,int>mp1;//for string s
        unordered_map<char,int>mp2; //for string t
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mp2[t[i]]++;
        }
        for(auto a:mp1){
            char ch1=a.first;
            int freq1=a.second;
            if(mp2.find(ch1)!=mp2.end()){
                int freq2=mp2[ch1];
                if(freq1!=freq2) {return false;}
            }
            else { return false;}
        }
        return true;
    }
};