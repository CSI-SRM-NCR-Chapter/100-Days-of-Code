class Solution {
    vector<vector<string>> ans;
    public:

    vector<vector<string>> solveNQueens(int n) {
        vector<string> sol;
        for (int i=0; i<n; i++) {
            string s;
            for (int j=0; j<n; j++) s.push_back('.');
            sol.push_back(s);
        }

        solve(n, 0, sol);
        return ans;
    }

    void solve(int n, int k, vector<string>& sol) {
        if (k == n) {
            ans.push_back(sol);
            return;
        }

        for (int i=0; i<n; i++) {
            if (isValid(n, k, i, sol)) {
                sol[k][i] = 'Q';
                solve(n, k+1, sol);
                sol[k][i] = '.';
            }
        }
    }

    bool isValid(int size, int k, int i, vector<string>& sol) {
        int m = k-1, left = i-1, right = i+1;
        while(m>=0) {
            if (left >= 0 and sol[m][left--] == 'Q') return false;
            if (right < size and sol[m][right++] == 'Q') return false;
            if (sol[m][i] == 'Q') return false;
            m--;
        }

        return true;
    }
};
