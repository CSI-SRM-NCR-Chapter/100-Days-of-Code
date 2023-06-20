class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        for(int i=2; i<n; i++){
            int x1=coordinates[i-1][0]-coordinates[i-2][0];
            int x2=coordinates[i][0]-coordinates[i-1][0];
            int y1=coordinates[i-1][1]-coordinates[i-2][1];
            int y2=coordinates[i][1]-coordinates[i-1][1];
            if(x1*y2!=x2*y1) return false;
        }
        return true;
    }
};
