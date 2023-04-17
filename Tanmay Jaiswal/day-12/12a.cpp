class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;
        for (auto i:s) mp[i]++;
        for (auto i:t) {
            if (mp.find(i) == mp.end()) return i;
            else {
                mp[i]--;
                if (mp[i] < 0) return i;
            }
        }
        return -1;
    }
};