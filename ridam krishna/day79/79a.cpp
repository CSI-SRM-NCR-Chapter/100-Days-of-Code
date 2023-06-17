class Solution {
public:
    vector<vector<int>> ans;
    int nl;

    void solve(vector<int> &a, int id, int k) {
        if(k == 0) {
            ans.push_back(a);
            return;
        }
        for(int i=id; i<=nl; i++) {
            a.push_back(i);
            solve(a, i+1, k-1);
            a.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        nl = n;
        vector<int> a;
        solve(a, 1, k);
        return ans;
    }
};
