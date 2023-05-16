class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int t = 0;
        int b = matrix.size()-1;
        int l = 0;
        int r = matrix[0].size()-1;
        int d = 0; 
        while(t<=b && l<=r) {
            if(d==0) {
                for(int i=l; i<=r;i++) res.push_back(matrix[t][i]);
                t++;
            } 
            else if(d==1) {
                for(int i=t; i<=b; i++) res.push_back(matrix[i][r]);
                r--;
            } 
            else if (d == 2) {
                for(int i = r; i>=l; i--) res.push_back(matrix[b][i]);
                b--;
            } 
            else {
                for(int i=b; i>=t; i--) res.push_back(matrix[i][l]);
                l++;
            }
            d=(d+1)%4;
        }
        return res;
    }
};
