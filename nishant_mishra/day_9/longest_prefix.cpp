// https://leetcode.com/problems/longest-common-prefix
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for (string str : strs) {
            int prefLen = prefix.size();
            string temp = "";
            for (int i = 0; i < prefLen; ++i) {
                if (prefix[i] == str[i]) temp += str[i];
                else break;
            }
            prefix = temp;
        }
        return prefix;
    }
};
