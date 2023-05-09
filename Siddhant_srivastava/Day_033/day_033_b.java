class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int row = mat.length;
        int col = mat[0].length;
        if((row * col) != (r * c)) return mat;
        int[][] ans = new int[r][c];
        int ans_r = 0;
        int ans_c = 0;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                ans[ans_r][ans_c] = mat[i][j];
                ans_c++;
                if(ans_c == c)
                {
                    ans_c = 0;
                    ans_r++;
                }
            }
        }
        
        return ans;
    }
}