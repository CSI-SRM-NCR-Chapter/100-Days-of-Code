class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string, int> row;
        int n = grid.size();
        int count = 0;

        for (int i=0; i<n; i++) {
            string t;
            for (int j=0; j<n; j++)
                t += to_string(grid[i][j]) + ',';

            row[t]++;
        }

        for (int i=0; i<n; i++) {
            string t;
            for (int j=0; j<n; j++)
                t += to_string(grid[j][i]) + ',';
            
            if (row.find(t) != end(row)) count += row[t];
        }

        return count;
    }
};
