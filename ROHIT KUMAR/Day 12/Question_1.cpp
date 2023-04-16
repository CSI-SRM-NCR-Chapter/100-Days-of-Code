class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int count = t.size();
        for (int i=0; i<count; i++){
            if (s[i] != t[i])
                return t[i];
        }
        return t[count-1];
    }
};
