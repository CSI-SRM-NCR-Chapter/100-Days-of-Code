class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for (int i=2; i<n-1; i++) {
            int x = n;
            string base;
            while (x) {
                base.push_back(x%i - '0');
                x /= i;
            }

            x = base.size();
            for (int j = 0; j<x/2; j++) {
                if (base[j] != base[x-1-j]) return false;
            }
        }

        return true;
    }
};