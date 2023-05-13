class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> ans; 
        int n=matrix.size();
        int i=0, j=0;

        while(i<n && j<n) {
            if(j!=n-1) {
                ans.push_back(matrix[i][j]);
                j++;
            }
            else if(j==n-1) {
                ans.push_back(matrix[i][j]);
                j=0;
                i++;
            }
        }

        sort(ans.begin(),ans.end());

        return ans[k-1];
    }
};
