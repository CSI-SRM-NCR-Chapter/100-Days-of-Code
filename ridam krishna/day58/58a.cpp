class Solution {
public:
    vector<vector<int>> dp;

    int uniquePaths(int m, int n) {
        dp = vector<vector<int>> (101, vector<int>(101, -1));
        return uniquePathss(m, n);
    }

    int uniquePathss(int m, int n) {
        if (m<1 or n<1) return 0;
        if (m==1 and n==1) return 1;

        if (dp[m][n] != -1) return dp[m][n];

        return dp[m][n] = uniquePathss(m-1, n) + uniquePathss(m, n-1);
    }
};
