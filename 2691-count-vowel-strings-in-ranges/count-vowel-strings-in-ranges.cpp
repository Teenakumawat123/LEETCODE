class Solution {
public:
    bool vowels(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'|| ch=='u') return 1;
        else return 0;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& q) {
        vector<int>v(words.size(),0);
        for(int i=0;i<words.size();i++){
            string s=words[i];
            if(vowels(s[0]) && vowels(s.back())) v[i]=1;
        }
        for(int i=1;i<v.size();i++){
            v[i]+=v[i-1];
        }
       
        vector<int>ans;
        
        for(int i=0;i<q.size();i++){
            if(q[i][0]==0){
                ans.push_back(v[q[i][1]]);
            }
            else{
                ans.push_back(v[q[i][1]]-v[q[i][0]-1]);
            }
        }
        return ans;
    }
};