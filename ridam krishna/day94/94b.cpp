class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int ans=0;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(grid[i][j]==1){
                    if(i==0 or grid[i-1][j]==0) ans++;
                    if(i==r-1 or grid[i+1][j]==0) ans++;
                    if(j==0 or grid[i][j-1]==0) ans++;
                    if(j==c-1 or grid[i][j+1]==0) ans++;
                }
            }
        }
        return ans;
    }
};
