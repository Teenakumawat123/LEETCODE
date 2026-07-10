class Solution {
public:
    string convert(string s, int numRows) {
        int m=numRows;
        int n=s.size();
        if(m==1) return s;
        vector<vector<char>> v(m, vector<char>(n, ' '));
        int r=0;
        int c=0;
        int idx=0;
        if(m==2){
           for(int j=0;j<n;j++){
            for(int i=0;i<m;i++){
                v[i][j]=s[idx];
                idx++;
                if(idx>=s.size()) break;
            }
            if(idx>=s.size()) break;
           }
        }
        else{
        for(int i=0;i<s.size();i++){
            if(r==0){
                for(int j=0;j<m;j++){
                   v[j][c]=s[i];
                   r++;
                   i++;
                   if(i>=s.size()) break;
                }
                r--;
                i--;
            }
            else{
                while(r){
                    v[--r][++c]=s[i];
                    i++;
                    if(i>=s.size()) break;
                    if(r==1){
                        r=0;
                        c++;
                    }
                }
                if(i>=s.size()) break;
                i--;
            }
        }
        }
        string res="";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if(v[i][j]!=' ') res+=v[i][j];
            }
        }
       return res;
    }
};