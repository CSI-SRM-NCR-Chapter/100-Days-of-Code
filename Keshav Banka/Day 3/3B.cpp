class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long res = 0, n = x;
        while (n) {
            res = res * 10 + n % 10;
            n /= 10;
        }
        cout << INT_MIN << " " << INT_MAX;
        return res == x;
    }
};
