class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v;
        int n1=matrix.size();
        int n2=matrix[0].size();
        int count=0;
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                v.push_back(matrix[i][j]);
            }
        }
        sort(begin(v), end(v));
        count=v[k-1];
        return count;
    }
};
