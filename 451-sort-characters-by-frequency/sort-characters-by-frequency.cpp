class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>>freq;
       for(auto p:mp){
        freq.push_back({p.second,p.first});
       }
       //sort in descending order
       sort(freq.rbegin(),freq.rend());

      string result=""; 
       for(int i=0;i<freq.size();i++){
        for(int j=0;j<freq[i].first;j++){
            result+=freq[i].second;
        }
       }
        return result;
    }
};