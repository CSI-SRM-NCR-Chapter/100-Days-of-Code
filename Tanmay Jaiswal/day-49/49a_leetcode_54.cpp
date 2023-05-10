class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int rowTop = 0;
        int rowBottom = matrix.size() - 1;
        int lcol = 0;
        int rcol = matrix[0].size() - 1;

        int d = 0; 

        while (rowTop <= rowBottom && lcol <= rcol) {
            if (d == 0) {
                for (int i = lcol; i <= rcol; i++) ans.push_back(matrix[rowTop][i]);
                rowTop++;
            } 
            else if (d == 1) {
                for (int i = rowTop; i <= rowBottom; i++) ans.push_back(matrix[i][rcol]);
                rcol--;
            } 
            else if (d == 2) {
                for (int i = rcol; i >= lcol; i--) ans.push_back(matrix[rowBottom][i]);
                rowBottom--;
            } 
            else {
                for (int i = rowBottom; i >= rowTop; i--) ans.push_back(matrix[i][lcol]);
                lcol++;
            }

            d = (d + 1) % 4;
        }
        return ans;
    }
};
