class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int slen = strs[0].size();

        for (auto x:strs) {
            int i=0, n1 = min(x.size(), strs[0].size());
            while (i<n1 and strs[0][i] == x[i]) i++;
            slen = min(slen, i);
        }

        return strs[0].substr(0, slen);
    }
};
