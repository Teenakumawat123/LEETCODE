class Solution {
public:
    vector<int> sumZero(int n) {
       vector<int>ans(n);
       int i=n/2;
       int j=n/2-1;
       int a=1;
       if(n%2!=0){ ans[n/2]=0;  i=n/2+1;}
       while(i<n){
        ans[i]=a;
        ans[j]=-a;
        a++;
        i++;
        j--;
       }
    //    for(int i :ans){
    //     cout<<i<<" ";
    //    }
       return ans;
    }
};