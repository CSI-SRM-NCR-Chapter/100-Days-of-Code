class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int res = 0;

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (grid[i][j]) {
                    if (j>0 and !grid[i][j-1] || j==0) res++;
                    if (i>0 and !grid[i-1][j] || i == 0) res++;
                    if (j<n-1 and !grid[i][j+1] || j==n-1) res++;
                    if (i<m-1 and !grid[i+1][j] || i==m-1) res++;
                }
            }
        }

        return res;
    }
};
