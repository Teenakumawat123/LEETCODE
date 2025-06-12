class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        if(num==0) return true;
        if(num==10) return true;
        string r=to_string(num);
        // int a=r.size();
        // int start;
        // if(a==1) start=1;
        // if(a==2) start=10;
        // if(a==3) start=100;
        // if(a==4) start=1000;
        // if(a==5) start=10000;
        
        for(int i=1;i<num;i++){
            string new0=to_string(i);
            reverse(new0.begin(),new0.end());
            int num1=stoi(new0);
            if(i+num1==num) return true;
        }
        return false;
    }
};