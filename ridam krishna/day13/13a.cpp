class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v1;
        for (int i=0; i<numRows; i++) {
            vector<int>v2(i+1, 1);
            for (int j=1; j<i; j++) {
                v2[j]=v1[i-1][j]+v1[i-1][j-1];
            }
            v1.push_back(v2);
        }
        return v1;
    }
};
