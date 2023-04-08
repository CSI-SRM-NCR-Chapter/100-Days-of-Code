class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int n = s.length();
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i ++) {
            try {
                mp[s[i]] ++;
            } catch(...) {
                mp[s[i]] = 1;
            }
            try {
                mp[t[i]] --;
            } catch(...) {
                mp[t[i]] = -1;
            }
        }
        for (auto ele: mp) {
            if (ele.second != 0) return false;
        }
        return true;
    }
};
