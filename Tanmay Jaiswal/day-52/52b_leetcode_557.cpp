class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0, j = 0;

        while (j<n) {
            if (s[j] == ' ') {
                reverse(begin(s)+i, begin(s)+j);
                i = j+1;
            }

            j++;
        }
        reverse(begin(s)+i, begin(s)+j);

        return s;
    }
};
