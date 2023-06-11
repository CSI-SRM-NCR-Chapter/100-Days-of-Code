class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> row(9), col(9), subBox(9);
        for (int i = 0; i<9; i++) {
            for (int j=0; j<9; j++) {
                if (board[i][j] == '.') continue;
                else if (row[i].count(board[i][j]) || col[j].count(board[i][j]) || subBox[i/3*3 + j/3].count(board[i][j])) return false;
                
                row[i].insert(board[i][j]);
                col[j].insert(board[i][j]);
                subBox[i/3*3+j/3].insert(board[i][j]);
            }
        }

        return true;
    }
};
