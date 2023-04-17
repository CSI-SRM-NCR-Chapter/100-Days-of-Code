class Solution {
public:
    bool canConstruct(string a, string b) {
        int map[26]={0};
        for (auto ele: b) map[ele-'a']++;
        for (auto ele: a) if (map[ele-'a']--<=0) return false;
        return true;
    }
};
