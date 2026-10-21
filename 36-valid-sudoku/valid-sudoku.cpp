class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool r[9][10]={};
        bool c[9][10]={};
        bool box[9][10]={};

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
        
                int boxIdx=(i / 3) * 3 + (j / 3);
                if(r[i][board[i][j]-48] || c[j][board[i][j]-48] || box[boxIdx][board[i][j]-48] ) return false;

                r[i][board[i][j]-48]=true;
                c[j][board[i][j]-48]=true;
                box[boxIdx][board[i][j]-48]=true;
            }
        }
        return true;
    }
};