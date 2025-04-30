class Solution {
public:
    string findCommonResponse(vector<vector<string>>& res) {
        int n=res.size();
         vector<string>temp;
        for(int i=0;i<res.size();i++){
            set<string>s;
            for(int j=0;j<res[i].size();j++){
             s.insert(res[i][j]);
            }
            for(string ele:s){
                temp.push_back(ele);
            }
        }
        map<string,int>mp;
        for(int i=0;i<temp.size();i++){
            mp[temp[i]]++;
        }

        int max_freq=INT_MIN;
        for(auto p:mp){
            max_freq=max(max_freq,p.second);
        }
        string result="";
        for(auto p:mp){
            if(p.second==max_freq){
             result+=p.first;
             break;
            }
        }
        return result;
    }
};