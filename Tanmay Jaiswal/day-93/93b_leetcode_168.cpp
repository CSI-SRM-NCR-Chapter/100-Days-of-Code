class Solution {
public:
    string convertToTitle(int columnNumber) {

        string res;
        while (columnNumber) {
            columnNumber--;
            res.push_back(columnNumber%26 + 'A');
            columnNumber /= 26;
        }

        reverse(begin(res), end(res));
        return res;
    }
};
