class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = n;

        int ans = 0;

        for (int i=0; i<n; i++) {
            int top = 0, front = 0, side = 0;
            for (int j=0; j<n; j++) {
                if (grid[i][j]) top++;
                front = max(front, grid[i][j]);
                side = max(side, grid[j][i]);
            }

            ans += top + front + side;
        }

        return ans;
    }
};
