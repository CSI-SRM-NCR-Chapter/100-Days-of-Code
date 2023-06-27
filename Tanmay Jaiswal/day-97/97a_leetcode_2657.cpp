class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> f(n+1);
        vector<int> res(n);

        for (int i=0; i<n; i++) {
            if (++f[A[i]] == 2) res[i]++;
            if (++f[B[i]] == 2) res[i]++;

            if (i>0) res[i] += res[i-1];
        }

        return res;
    }
};
