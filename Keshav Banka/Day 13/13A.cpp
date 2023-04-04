class Solution {
public:
    vector<vector<int>> generate(int n) {
        if (n == 1) return {{1}};
        auto prev = generate(n-1);
        vector<int> curr;
        for (int i = 0; i < n; i ++) {
            if (i == 0 || i == n-1) curr.push_back(1);
            else {
                int num = prev[n-2][i-1] + prev[n-2][i];
                curr.push_back(num);
            }
        }
        prev.push_back(curr);
        return prev;
    }
};
