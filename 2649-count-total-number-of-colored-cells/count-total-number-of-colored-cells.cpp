class Solution {
public:
    long long coloredCells(int n) {
    //brute force solution 

    //     if(n==1) return 1;
    //    long long count=1;
    //   for(int i=1;i<n;i++){
    //     count+=(4*i);
    //   }
    //   return count;


//using recursion
    if(n==1) return 1;
    return 4*(n-1)+coloredCells(n-1);
    }
};