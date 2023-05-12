class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {

    int m = board.size();
    int n= board[0].size();

    int dir[8][2] = { {0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1}};

    int a = 11;           // for 1st rule
    int b = 12;           // for 2nd rule
    int c = 13;           // for 3rd rule
    int d = 14;           // for 4th rule
    

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            int live = 0;

            for(int k=0; k<8; k++)
            {
                int row_nbh = i + dir[k][0];
                int col_nbh = j + dir[k][1];

                if(row_nbh >=0 && row_nbh <m && col_nbh >=0 && col_nbh < n)
                {
                     int temp = board[row_nbh][col_nbh];
                     if( temp== 1 || temp==a || temp ==b|| temp == c)
                     live++;
                }
            }

            if(board[i][j]==1 || board[i][j]==a || board[i][j]==b|| board[i][j]==c)
            {
                if(live < 2)
                board[i][j]= a;
                else if(live == 2 || live==3)
                board[i][j]=b;
                else 
                board[i][j]=c;
            }
            else 
            {
                if(live == 3)
                board[i][j]=d;
            }
        }
    }

    for(int i=0 ; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {

            if(board[i][j] ==a || board[i][j] == c )
            board[i][j]=0;
            else if(board[i][j] == b || board[i][j] == d)
            board[i][j] = 1;
        }
    }

    }
};
