class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
        int m=n1.size();
        int n=n2.size();
        vector<int>v;
        int i=0,j=0;
        while(i<m && j<n){
            if(n1[i]<n2[j]){
              v.push_back(n1[i]);
              i++;
            }
            else{
                v.push_back(n2[j]);
                j++;
            }
        }
        if(i==m){
            while(j<n){
                v.push_back(n2[j]);
                j++;
            }
        }
        else{
            while(i<m){
                v.push_back(n1[i]);
                i++;
            }
        }

        if(v.size()%2!=0) return (double)v[v.size()/2];
        else return (double)(v[v.size()/2]+v[v.size()/2-1])/2;

    }
};