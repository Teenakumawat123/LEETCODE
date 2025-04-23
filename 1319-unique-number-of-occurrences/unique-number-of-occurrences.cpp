class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
       set<int>s;
       for(auto p:mp){
        int x=p.second;
        if(s.find(x)!=s.end()){
            return false;
        }
        else s.insert(x);
       }
       return true;
    }
};