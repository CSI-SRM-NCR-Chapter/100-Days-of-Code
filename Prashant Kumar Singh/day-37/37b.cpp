class Solution {
public:
    int minTimeToType(string word) {
        int ans = 0;
        char initial = 'a';

        for (auto i:word) {
            if (i == initial) ans++;
            else {
                ans += min(abs(i - initial), 26 - abs(i - initial)) + 1;
                initial = i;
            }
        }
        return ans;
    }
};
