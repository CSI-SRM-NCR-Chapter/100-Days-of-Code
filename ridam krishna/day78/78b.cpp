class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> row;
        unordered_set<int> col;
        // unordered_set<int> box;

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]!='.'){
                    if(row.find(board[i][j])!=row.end()) return false;
                    row.insert(board[i][j]);
                }
                if(board[j][i]!='.'){
                    if(col.find(board[j][i])!=col.end()) return false;
                    col.insert(board[j][i]);
                }
            }
            row.clear();
            col.clear();
        }
        //from here ntme
        for(int i=0; i<9; i+=3) { 
	        for(int j=0; j<9; j+=3) {
	            vector<char> temp;
	            for(int x=0; x<3; x++) {
	                for(int y=0; y<3; y++) {
	                    temp.push_back(board[i+x][j+y]);
	                }
	            }
	            sort(temp.begin(), temp.end()); 
	            for(int x=1; x<temp.size(); x++) {
	                if(temp[x] == temp[x-1] && temp[x] != '.') {
	                    return false; 
	                }
	            }
	        }
    	}
        return true;
    }
};
