class Solution {
public:
    bool isSafe(int i, int j, vector<vector<char>>& board, int val){
        for(int x=0; x<9; x++){
            if(board[i][x]==val) return false;
            if(board[x][j]==val) return false;
            if(board[3*(i/3)+x/3][3*(j/3)+x%3]==val) return false;
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){

                if(board[i][j]=='.'){
                    for(char val=49; val<=57; val++){
                        if(isSafe(i,j,board,val)){
                            board[i][j]=val;
                            bool further=solve(board); //recursion
                            if(further) return true;
                            else board[i][j]='.'; //backtrack
                        }
                    }
                    return false;
                }

            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board); //ntmebbr
    }
};
