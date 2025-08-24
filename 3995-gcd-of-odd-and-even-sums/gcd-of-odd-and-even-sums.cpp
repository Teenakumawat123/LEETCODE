class Solution {
public:
    int gcd(int a, int b){
        int hcf = 1;
        for (int i = min(a, b); i >= 1; i--){
            if (a % i == 0 && b % i == 0){
                hcf = i;
                break;
            }
        }
        return hcf;
    }
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0,sumEven=0,i=1,j=2;
        while(n){
            sumOdd+=i;
            sumEven+=j;
            i+=2;
            j+=2;
            n--;
        }
        return gcd(sumOdd,sumEven);
    }
};