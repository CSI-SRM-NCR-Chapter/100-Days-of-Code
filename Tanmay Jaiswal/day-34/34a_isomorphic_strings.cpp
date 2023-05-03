class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sn = s.size(), tn = t.size();
        if (sn != tn) return false;

        unordered_map<char, char> smp, tmp;
        for (int i=0; i<sn; i++) {
            char x = s[i];
            char y = t[i];

            if (smp.find(x) == smp.end() and tmp.find(y) == tmp.end()) {
                smp[x] = y;
                tmp[y] = x;
            }
            else {
                if (smp[x] == y and tmp[y] == x) continue;
                return false;
            }
        }

        return true;
    }
};
