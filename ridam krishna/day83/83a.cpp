class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string, int> m;
        int n=grid.size();
        int count=0;
        string s1="";
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                s1+=to_string(grid[i][j]);
                s1+='.';
            }
            m[s1]++;
            s1="";
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                s1+=to_string(grid[j][i]);
                s1+='.';
            }
            count+=m[s1];
            s1="";
        }
        return count;
    }
};
