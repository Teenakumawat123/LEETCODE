class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        if(num==0) return true;
        for(int i=1;i<num;i++){
            string new0=to_string(i);
            reverse(new0.begin(),new0.end());
            int num1=stoi(new0);
            if(i+num1==num) return true;
        }
        return false;
    }
};