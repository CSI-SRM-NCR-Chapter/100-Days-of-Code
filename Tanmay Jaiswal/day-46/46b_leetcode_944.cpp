class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size(), m = strs[0].size();
        int res = 0;
        
        for(int j=0;j<m;j++) {
            for(int i=1;i<n;i++) {
                if(strs[i-1][j] > strs[i][j]) {
                    res++;
                    break;
                }
            }
        }
        
        return res;
    }
};
