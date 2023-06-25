class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int l = 0, r = maxSum, j = n - index - 1;
    while (l < r) {
        long m = (l + r + 1) / 2;
        auto need = m * m - ((m > index ? (m - index - 1) * (m - index) : 0) + (m > j ? (m - j - 1) * (m - j) : 0)) / 2;
        if (need <= maxSum - n) l = m;
        else r = m - 1;
    }
    return l + 1;
    }
};
