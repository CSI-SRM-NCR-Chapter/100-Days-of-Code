class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int i = 0, j = n-1;

        unordered_set<char> st = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        while (i<j) {
            if (st.find((s[i])) != st.end() and st.find((s[j])) != st.end()) swap(s[i++], s[j--]);
            if (st.find((s[i])) == st.end()) i++;
            if (st.find((s[j])) == st.end()) j--;
        }

        return s;
    }
};
