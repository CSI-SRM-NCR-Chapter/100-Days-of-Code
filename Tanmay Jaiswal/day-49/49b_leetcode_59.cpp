class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         vector<vector<int>> arr(n, vector<int>(n));
         int x = 1;
         for (int i=0; i<n/2; i++) {
             for (int j=i; j<n-i; j++) { // right
                arr[i][j] = x++;
             }

             for (int j=i+1; j<n-i-1; j++) { // down
                 arr[j][n-i-1] = x++;
             }

             for (int j=n-i-1; j>=i; j--) { // left
                 arr[n-i-1][j] = x++;
             }

             for (int j=n-i-2; j>i; j--) { // up
                 arr[j][i] = x++;
             }
         }

         if (n&1) arr[n/2][n/2] = x;

         return arr;
    }
};
