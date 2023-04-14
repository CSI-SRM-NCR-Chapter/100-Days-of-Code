class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            vector<int>tmp(i+1, 1);
            ans.push_back(tmp);
            for(int j=1;j<i;j++){
                ans[i][j]=ans[i-1][j]+ans[i-1][j-1];

            }

        }
        return ans;

    }
};






























        
