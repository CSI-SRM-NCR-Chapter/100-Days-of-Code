class Solution {
public:

    bool isPalindrome (string s) {
        string t = s;
        reverse(begin(s), end(s));
        return t==s;
    }

    void solver (string s, int idx, vector<vector<string>>& ans, vector<string> temp) {
        if (idx == s.size()) {
            ans.push_back(temp);
            return;
        }

        string ss = "";
        for (int i=idx; i<s.size(); i++) {
            ss.push_back(s[i]);
            if (isPalindrome(ss)) {
                temp.push_back(ss);
                solver(s, i+1, ans, temp);
                temp.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        solver(s, 0, ans, temp);
        return ans;
    }
};