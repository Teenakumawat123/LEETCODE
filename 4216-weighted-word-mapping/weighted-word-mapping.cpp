class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n=words.size();
        string res="";
        for(string s:words){
            int w=0;
            for(int i=0;i<s.size();i++){
                w+=(weights[s[i]-97]);
            }
            w=w%26;
          res+=(char)(122-w);
        }
        return res;
    }
};