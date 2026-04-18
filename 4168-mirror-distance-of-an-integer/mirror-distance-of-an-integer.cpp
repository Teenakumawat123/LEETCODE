class Solution {
public:
int rev(int n){
    int ans=0;
    while(n>0){
        ans=(ans*10)+n%10;
        n/=10;
    }
    return ans;
}
    int mirrorDistance(int n) {
       if(n<10) return 0;
       return abs(n-rev(n)); 
    }
};