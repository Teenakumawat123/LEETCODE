class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       vector<vector<int>> matrix(n,vector<int>(n,0));
       if(n==1) matrix[0][0]=n;
        int minr=0;
        int minc=0;
        int maxr=n-1;
        int maxc=n-1; 
        int count=1;
        vector<int>v;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc;j++){
             matrix[minr][j]=count++;
            } 
            minr++;
            // if(minr>maxr || minc>maxc) break;
            for(int i=minr;i<=maxr;i++){
               matrix[i][maxc]=count++; 
            }
            maxc--;
            // if(minr>maxr || minc>maxc) break;
            for(int j=maxc;j>=minc;j--){
                matrix[maxr][j]=count++; 
            }
            maxr--;
            // if(minr>maxr || minc>maxc) break;
            for(int i=maxr;i>=minr;i--){
                 matrix[i][minc]=count++; 
            }
            minc++;
            // if(minr>maxr || minc>maxc) break;
        }
    return matrix;
    }
};