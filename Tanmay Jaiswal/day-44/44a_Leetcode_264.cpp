class Solution {
public:
    int nthUglyNumber(int n) {
        if (n <= 0) return false;
        if (n == 1) return true;

        int n2 = 0, n3 = 0, n5 = 0;
        vector<int> t(n);
        t[0] = 1;

        for (int i=1; i<n; i++) {

            t[i] = min(t[n2]*2, min(t[n3]*3, t[n5]*5));

            if (t[i] == t[n2]*2) n2++;
            if (t[i] == t[n3]*3) n3++;
            if (t[i] == t[n5]*5) n5++;
        }

        return t[n-1];
    }
};
