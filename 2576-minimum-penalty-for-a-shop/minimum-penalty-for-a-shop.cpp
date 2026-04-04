class Solution {
public:
    int bestClosingTime(string c) {
        int n = c.size();
        int min_pen = INT_MAX;
        int a = 0;
        vector<int>pre(n+1);//for N
        vector<int>suf(n+1); // for Y
        for(int i=0;i<c.size();i++){
           pre[i]=a;
           if(c[i]=='N') a++;
        }
        pre[n]=a;
        a=0;
        suf[n]=0;
        for(int i=n-1;i>=0;i--){
            if(c[i]=='Y') a++;
            suf[i]=a;
        }
        for(int i=0;i<pre.size();i++){
            pre[i]=pre[i]+suf[i];
            min_pen=min(min_pen,pre[i]);
        }
        for(int i=0;i<pre.size();i++){
            if(pre[i]==min_pen){ return i; break;}
        }
        return a;
    }
};