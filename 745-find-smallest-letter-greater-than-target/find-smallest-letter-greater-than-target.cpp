class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        int ans=INT_MAX;
        for(int i=l.size()-1;i>=0;i--){
            if(l[i]!=t && l[i]>t){
                ans=min(ans,(int)l[i]);
            }
        }
        if(ans==INT_MAX) return l[0];
        else return (char)ans;
    }
};