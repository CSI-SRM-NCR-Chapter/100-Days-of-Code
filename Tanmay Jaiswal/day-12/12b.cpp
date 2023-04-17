class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        for (auto i:ransomNote) mp[i]++;
        for (auto i:magazine) mp[i]--;
        for (auto i:mp) {
            if (i.second > 0) return 0;
        }
        return 1;
    }
};