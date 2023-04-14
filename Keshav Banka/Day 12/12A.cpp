class Solution {
public:
    char findTheDifference(string s, string t) {
        int map[26]={0};
        for (auto ele: s) map[ele-'a']++;
        for (auto ele: t) map[ele-'a']--;
        for (int i = 0; i < 26; i ++) if (map[i]) return 'a' + i;
        return '3';
    }
};
