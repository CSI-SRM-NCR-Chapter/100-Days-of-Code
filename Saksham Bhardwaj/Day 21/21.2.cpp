class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<int,int> mp;
        vector<string> keyRows1 = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        vector<string> keyRows2 = {"QWERTYUIOP", "ASDFGHJKL", "ZXCVBNM"};

        for (int i=0; i<3; i++) {
            for (auto j: keyRows1[i]) {
                mp[j] = i+1;
            }

            for (auto j: keyRows2[i]) {
                mp[j] = i+1;
            }
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
