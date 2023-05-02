class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> alp(26);
        for (auto& x : s) alp[x - 'a']++;
        for (int i = 0; i < s.length(); i++) {
            if (alp[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }
};
