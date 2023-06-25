class Solution {
public:
    int largestAltitude(vector<int>& A) {
        int h = 0, ans = 0;
        for (int n : A) ans = max(ans, h += n);
        return ans;
    }
};