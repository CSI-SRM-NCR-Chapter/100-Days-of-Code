class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while (columnNumber) {
            columnNumber--;
            ans.push_back(columnNumber%26 + 'A');
            columnNumber /= 26;
        }
        reverse(begin(ans), end(ans));
        return ans;
    }
};
