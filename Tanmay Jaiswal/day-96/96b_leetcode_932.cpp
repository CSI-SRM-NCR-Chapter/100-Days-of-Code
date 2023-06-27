class Solution {
public:
    string longestNiceSubstring(string s) {
        int res = 0;
        string rs = "";

        int n = s.size();
        for (int i=0; i<n; i++) {
            unordered_set<char> st;
            for (int j=i; j<n; j++) {
                st.insert(s[j]);
                
                bool flag = 1;
                for (auto x: st) {
                    if (!st.count(toupper(x)) || !st.count(tolower(x))) 
                        flag = 0;
                }
                
                if (flag && res < j-i+1) {
                    res = j-i+1;
                    rs = s.substr(i, res);
                }
            }
        }

        return rs;
    }
};
