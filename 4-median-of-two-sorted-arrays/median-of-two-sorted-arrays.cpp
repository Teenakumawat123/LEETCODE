class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
        int m=n1.size();
        int n=n2.size();
        vector<int>v(m+n);
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(n1[i]<n2[j]){
              v[k]=n1[i];
              i++;
              k++;
            }
            else{
                v[k]=n2[j];
                k++;
                j++;
            }
        }
        if(i==m){
            while(j<n){
                v[k]=n2[j];
                k++;
                j++;
            }
        }
        else{
            while(i<m){
                v[k]=n1[i];
                k++;
                i++;
            }
        }
       for(int x :v){
        cout<<x;
       }
        double ans;
        if(v.size()%2!=0) ans=(double)v[v.size()/2];
        else ans=(double)(v[v.size()/2]+v[v.size()/2-1])/2;

        return ans;
    }
};