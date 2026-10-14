class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>num*9) return "";
        int nines=sum/9;
        int remain=sum%9;

        string res(nines,'9');
        if(remain>0){
            res.push_back(remain+48);
        }
        res.append(num-res.length(),'0');

        return res;
    }
};