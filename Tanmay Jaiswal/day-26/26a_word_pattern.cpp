class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp;
        unordered_map<string, char> ms;

        int n = pattern.size(), m = s.size();

        vector<string> arr;
        int i=0, j=0;

        string temp = "";
        while (i<m) {
            if (s[i] == ' ') {
                arr.push_back(temp);
                temp = "";
            }
            else {
                temp.push_back(s[i]);
            }

            i++;
        }

        arr.push_back(temp);

        if (pattern.size() != arr.size()) return 0;

        for (i=0; i<n; i++) {
            if (mp.find(pattern[i]) != mp.end() and mp[pattern[i]] != arr[i]) return 0;
            if (ms.find(arr[i]) != ms.end() and ms[arr[i]] != pattern[i]) return 0;
            else {
                mp[pattern[i]] = arr[i];
                ms[arr[i]] = pattern[i];
            }
        }

        return 1;
    }
};