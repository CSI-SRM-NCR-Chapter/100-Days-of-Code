class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int sum=0;

        for(int i=0; i<grid.size(); i++){
            int front=0, side=0, top=0;
            for(int j=0; j<grid.size(); j++){
                front=max(grid[i][j],front);
                side=max(grid[j][i],side);
                if(grid[i][j]>0) top++;
            }
            sum=front+sum+side+top;
        }
        return sum;
    }
};
