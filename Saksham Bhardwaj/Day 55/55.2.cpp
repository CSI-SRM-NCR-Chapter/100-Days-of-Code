class Solution {
public:
void solve(int col,int n,vector<vector<string>>&ans, vector<string>&board, vector<int>&left,vector<int>&upper,vector<int>&lower){
    if(col==n){ 
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(left[row]==0&&upper[row+col]==0&&lower[n-1+col-row]==0){
            board[row][col]='Q';
            left[row]=1;
            upper[row+col]=1;
            lower[n-1+col-row]=1;
            solve(col+1,n,ans,board,left,upper,lower);
            board[row][col]='.';
            left[row]=0;upper[row+col]=0;
            lower[n-1+col-row]=0;
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int>left(n,0),upper(n*2-1,0),lower(n*2-1,0);
        solve(0,n,ans,board,left,upper,lower);
        return ans;
    }
};
