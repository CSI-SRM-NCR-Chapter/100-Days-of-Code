class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        for (auto x:s) mp[x]++;
        for (auto x:t) mp[x]--;
        for (auto x:mp) if (x.second != 0) return false;
        return true;
    }
};
