class Solution {
    vector<vector<int>> res;
    vector<int> temp;
public:
    vector<vector<int>> combine(int n, int k) {
        helper(n, k, 1);
        return res;
    }

    void helper(int n, int k, int i) {
        if (temp.size() == k) {
            res.push_back(temp);
            return;
        }

        for (int j=i; j<=n; j++) {
            temp.push_back(j);
            helper(n, k, j+1);
            temp.pop_back();
        }
    }
};
