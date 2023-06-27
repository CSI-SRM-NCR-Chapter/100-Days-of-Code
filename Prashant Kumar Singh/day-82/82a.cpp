class Solution {
    vector<vector<char>> ans;
    vector<vector<bool>> row{9, vector<bool>(10)};
    vector<vector<bool>> column{9, vector<bool>(10)};
    vector<vector<bool>> sub_box{9, vector<bool>(10)};

public:
    void solveSudoku(vector<vector<char>> &board) {
        for (int i=0; i<board.size(); i++) {
            for (int j=0; j<board.size(); j++) {
                if (board[i][j] != '.') {
                    row[i][board[i][j]-'0'] = 1;
                    column[j][board[i][j]-'0'] = 1;
                    sub_box[i/3*3 + j/3][board[i][j]-'0'] = 1;
                }
            }
        }
        solver(board, 0, 0);
        board = ans;
    }
    
    void solver(vector<vector<char>> &board, int i, int j) {
        if (i==8 and j==9) {
            ans = board;
            return;
        }

        if (j==9) {
            i++; 
            j=0;
        }
        if (i==9) return;

        if (board[i][j] != '.') {
            solver(board, i, j+1);
            return;
        }

        for (int k=1; k<=9; k++) {
            if (row[i][k] || column[j][k] || sub_box[i/3*3+j/3][k]) continue;

            row[i][k] = 1;
            column[j][k] = 1;
            sub_box[i/3*3 + j/3][k] = 1;

            board[i][j] = k+'0';
            solver(board, i, j+1);
            board[i][j] = '.';

            row[i][k] = 0;
            column[j][k] = 0;
            sub_box[i/3*3 + j/3][k] = 0;
        }
    }
};
