class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        ans.push_back(1);
        for(long i = 1; i <= rowIndex; i++) {
            ans.push_back((ans[i-1]*(rowIndex-i+1))/i);
        }      
        return ans;
    }
};
