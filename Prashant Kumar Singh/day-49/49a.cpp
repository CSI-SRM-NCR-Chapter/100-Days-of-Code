class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        vector<int> x = {0,1,0,-1};
        vector<int> y = {1,0,-1,0};
        int i = 0, j = 0;
        int move = 0;
        vector<vector<bool>> visited(matrix.size(), vector<bool> (matrix[0].size(), false));
        for(int k = 0 ; k < matrix.size() * matrix[0].size() ; k++)
        {
            visited[i][j] = true;
            res.push_back(matrix[i][j]);
            if(i + x[move] < 0 or i + x[move] == matrix.size() or j + y[move] < 0 or j + y[move] == matrix[0].size() or visited[i + x[move]][j + y[move]] == true)
            {
                move = (move + 1) % 4;
                i = i + x[move], j = j + y[move];
            }   
            else
                i = i + x[move], j = j + y[move]; 
        }
        return res;
    }
};
