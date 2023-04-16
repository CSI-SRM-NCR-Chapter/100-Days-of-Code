class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> mp;
        vector<string> keyRows = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};

        int row = 1;
        for (auto i: keyRows) {
            for (auto j: i) {
                mp[j] = row; // lowercase
                mp[toupper(j)] = row; // uppercase
            }
            row++;
        }

        vector<string> ans;
        for (auto i: words) {
            unordered_set<int> rows;
            for (auto j: i) {
                rows.insert(mp[j]);
            }

            if (rows.size() == 1) ans.push_back(i);
        }

        return ans;
    }
};
