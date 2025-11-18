class Solution {
public:
bool isSafe(vector<string>&board,int r ,int c,int n){
  //horizontal
  for(int j=0;j<n;j++){
    if(board[r][j]=='Q') return false;
  }
  //vertically
  for(int i=0;i<n;i++){
    if(board[i][c]=='Q') return false;
  }
  //left
  for(int i=r,j=c;i>=0 && j>=0;i--,j--){
    if(board[i][j]=='Q') return false;
  }
  //right
  for(int i=r,j=c;i>=0 && j<n;i--,j++){
    if(board[i][j]=='Q') return false;
  }
  return true;
}
void nQueen(vector<string>&board,int row ,int n,vector<vector<string>>&ans){
    if(row==n){
        ans.push_back({board});
        return;
    }
    for(int j=0;j<n;j++){
    if(isSafe(board,row,j,n)){
       board[row][j]='Q';
       nQueen(board,row+1,n,ans);
       board[row][j]='.';
    }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        vector<vector<string>>ans;
        nQueen(board,0,n,ans);
        return ans;
    }
};