class Solution {
public:
    int partitionString(string s) {
        int n = s.size();
        int ans = 1;

        bitset<26> f;
        for (int i=0; i<n; i++) {
            char x = s[i]-'a';
            if (!f.test(x)) f.set(x, 1);
            else {
                ans++;
                f.reset();
                f.set(x, 1);
            }
        }

        return ans;
    }
};
