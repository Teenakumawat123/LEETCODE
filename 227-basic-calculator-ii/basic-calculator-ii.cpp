class Solution {
public:
    int prio(char ch){
        if(ch=='+' || ch=='-') return 1;
        return 2;
    }
    int solve(int val1,int val2,char ch){
        if(ch=='+') return val1+val2;
        else if(ch=='-') return val1-val2;
        else if(ch=='*') return val1*val2;
        else return val1/val2;
    }

    int calculate(string s) {
        stack<int>val;
        stack<int>op;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ') continue;
            if(isdigit(s[i]))
            {
                int num=0;
                while(isdigit(s[i])){
                num=num*10+(s[i]-48);
                i++;
                }
                val.push(num);
                i--;
            }
            else{
                if(op.size()==0 || prio(op.top())<prio(s[i])) op.push(s[i]);
                else{
                    while(op.size()>0 && prio(op.top())>=prio(s[i])){
                        char ch=op.top();
                        op.pop();
                        int val2=val.top();
                        val.pop();
                        int val1=val.top();
                        val.pop();
                        int ans=solve(val1,val2,ch);
                        val.push(ans);
                    }
                    op.push(s[i]);
                }
            }
        }
        //the operator stack can have values,so make it empty
        while(op.size()>0){
            char ch=op.top();
            op.pop();
            int val2=val.top();
            val.pop();
            int val1=val.top();
            val.pop();
            int ans=solve(val1,val2,ch);
            val.push(ans);
        }
        return val.top();
    }
};