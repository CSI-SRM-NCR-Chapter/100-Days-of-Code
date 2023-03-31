class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int n = s.length();
        string str = "";
        for (int i = 0; i < n; i ++) {
            if (s[i] == ' ') {
                if (str != "") {
                    st.push(str);
                    str = "";
                }
            }
            else str += s[i];
        }
        s = str;
        while (!st.empty()) {
            if (s != "") s += ' ';
            s += st.top();
            st.pop();
        }
        return s;
    }
};
