class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        double x = coordinates[1][0] - coordinates[0][0]; 
        double y = coordinates[1][1] - coordinates[0][1];
        double m = x != 0? y/x : INT_MAX;

        for (int i=2; i<n; i++) {
            x = coordinates[i][0] - coordinates[i-1][0]; 
            y = coordinates[i][1] - coordinates[i-1][1]; 
            double m1 = x != 0? y/x : INT_MAX;

            if (m != m1) return false;
        }

        return true;
    }
};
