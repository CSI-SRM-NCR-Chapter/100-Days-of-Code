class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for (int i=1; i<n+1; i++)
            ans[i] = ans[i/2] + (i%2);

        return ans;
    }
};
