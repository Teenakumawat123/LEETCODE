class Solution {
public:
    bool closeStrings(string str1, string str2) {
        if(str1.size()!=str2.size()) return false;
        unordered_map<char,int>mp1,mp2;
        for(int i=0;i<str1.size();i++){
            mp1[str1[i]]++;
            mp2[str2[i]]++;
        }
        //compare map1 and map2 (only character)
        for(auto p:mp1){
            if(mp2.find(p.first)==mp2.end()) return false;
        }
        unordered_map<int,int>h1,h2;

        for(auto p:mp1){
            h1[p.second]++;
        }
        for(auto p:mp2){
            h2[p.second]++;
        }
        //compare helper1 and helper2
        for(auto p:h1){
            int key=p.first;
            int val=p.second;
            if(h2.find(key)==h2.end()) return false;
            if(h1[key]!=h2[key]) return false;
        }
        return true;
    }
};