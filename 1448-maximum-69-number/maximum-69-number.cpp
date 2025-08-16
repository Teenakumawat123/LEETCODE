class Solution {
public:
    char helper(char ch){
        if(ch=='6') return '9';
        else return '6';
    }
    int maximum69Number (int num) {
        string s=to_string(num);
        string t=s;
        int maxi=num;
        for(int i=0;i<s.size();i++){
            char ch=helper(s[i]);
            s[i]=ch;
            maxi=max(maxi,stoi(s));
            s=to_string(num);
        }
        return maxi;
    }
};