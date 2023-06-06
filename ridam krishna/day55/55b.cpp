class Solution {
    vector<vector<string>> res;
    public:

    vector<vector<string>> solveNQueens(int n) {
        vector<string> temp;
        for(int i=0; i<n; i++){
            string st;
            for(int j=0; j<n; j++){
                st.push_back('.');
            }
            temp.push_back(st);
        }
        find(n, 0, temp);
        return res;
    }

    void find(int n, int k, vector<string>& temp) {
        if(k == n) {
            res.push_back(temp);
            return;
        }
        for(int i=0; i<n; i++){
            if(correct(n, k, i, temp)){
                temp[k][i] = 'Q';
                find(n, k+1, temp);
                temp[k][i] = '.';
            }
        }
    }

    bool correct(int size, int k, int i, vector<string>& temp) {
        int m=k-1;
        int left = i-1;
        int right = i+1;
        while(m>=0) {
            if(left>=0 and temp[m][left--]=='Q') return false;
            if(right<size and temp[m][right++]=='Q') return false;
            if(temp[m][i]=='Q') return false;
            m--;
        }
        return true;
    }
};
