class Solution {
public:
    int maxDiff(int num) {
        string s=to_string(num);
        string max_str=s;
        string min_str=s;
        for(char c : s){
            if(c!='9'){
                for(char &ch :max_str){
                    if(ch==c) ch='9';
                }
                break;
            }
        }
            if(s[0]!='1'){
                for(char &ch :min_str){
                    if(ch==s[0]) ch='1';
                }
            }
           else {
            for (int i = 1; i < s.size(); ++i) {
                if (s[i] != '0' && s[i] != '1') {
                    for (char &ch : min_str) {
                        if (ch == s[i]) ch = '0';
                    }
                    break;
                }
            }
        }
        cout<<min_str;
        int max_val=stoi(max_str);
        int min_val=stoi(min_str);

        return max_val-min_val;
    }
};