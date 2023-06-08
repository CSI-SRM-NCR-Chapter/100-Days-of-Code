class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int ans = 0;

        for (int i=0; i<m; i++) {
            int x = bs(grid, m, n, i);
            if (x > -1) ans += n - x;
        }

        return ans;
    }

    int bs(vector<vector<int>>& grid, int m, int n, int i) {
        int s = 0, e = n-1;
        int ind = -1;
        
        while (s<=e) {
            int m = (s+e)/2;
            if (grid[i][m] < 0) {
                ind = m;
                e = m-1;
            }
            else s = m+1;
        }

        return ind;
    }
};
