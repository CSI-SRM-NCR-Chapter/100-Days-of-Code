class Solution {
public:
    vector<vector<int>> dp{101, vector<int>(101, -1)};
    int uniquePaths(int m, int n) {
        if (m<1 or n<1) return 0;
        if (m==1 and n==1) return 1;
        if (dp[m][n] != -1) return dp[m][n];
        
        return dp[m][n] = uniquePaths(m-1, n) + uniquePaths(m, n-1);
    }  
};
