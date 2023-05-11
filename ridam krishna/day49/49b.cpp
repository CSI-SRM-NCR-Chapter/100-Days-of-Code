class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n));
        int a=1;
        for(int i=0; i<n/2; i++) {
            for(int j=i; j<n-i; j++) v[i][j] = a++;
            for(int j=i+1; j<n-i-1; j++) v[j][n-i-1] = a++;
            for(int j=n-i-1; j>=i; j--) v[n-i-1][j] = a++;
            for(int j=n-i-2; j>i; j--) v[j][i] = a++;
        }
        if(n&1) v[n/2][n/2]=a;
        return v;
    }
};
