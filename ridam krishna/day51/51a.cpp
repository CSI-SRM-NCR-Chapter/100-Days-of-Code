class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size() , m = board[0].size();
        vector<vector<int>>ans(n+2,vector<int>(m+2,0));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                ans[i][j] = board[i-1][j-1];
            }
        }
        

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                int score2 = (ans[i+1][j] + ans[i-1][j] + ans[i][j-1] + ans[i][j+1]);
                int score1 = (ans[i-1][j-1]+ans[i+1][j+1]+ans[i-1][j+1]+ans[i+1][j-1]);
                int score = score1 + score2;
                
                if(ans[i][j] == 0){
                    if(score == 3) board[i-1][j-1]=1;
                }
                else{
                    if(score < 2 || score > 3) board[i-1][j-1]=0;
                }
            }
        }
  
    }
};
