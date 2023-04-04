class Solution {
public:
    string reverseWords(string s) {
        string s1 = "";
        vector<string> s2;

        for (auto i: s) {
            if (i!=' ')  s1.push_back(i);
            else {
                if (s1.size() > 0) {
                    if (s2.size() > 0) {
                         s2.push_back(s1 + " ");
                    }
                    else {
                        s2.push_back(s1);
                    }
                }
                s1 = "";
            }
        }

        if (s1.size() > 0) {
            if (s2.size() > 0) {
                s2.push_back(s1 + " ");
            }
            else {
                s2.push_back(s1);
            }
            s1 = "";
        }

        reverse(s2.begin(), s2.end());

        for (auto i:s2) {
            s1 += i;
        }
        return s1;
    }
};
