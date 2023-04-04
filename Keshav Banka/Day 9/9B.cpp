class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort (strs.begin(), strs.end());
        int n = strs.size();
        string ans = "";
        for (int i = 0; i < strs[0].length(); i ++) {
            if (i < strs[n-1].length() && strs[0][i] != strs[n-1][i]) {
                return ans;
            }
            ans += strs[0][i];
        }
        return ans;
    }
};
