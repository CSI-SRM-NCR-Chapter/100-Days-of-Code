class Solution {
public:
    bool detectCapitalUse(string word) {
        if (isUpper(word)) return true;
        if (isLower(word)) return true;
        if (isFirstCapital(word)) return true;
        return false;
    }

    bool isUpper(string &word) {
        for (auto ch: word)
            if (ch >= 'a' && ch <= 'z') return false;
        return true;
    }
    bool isLower(string &word) {
        for (auto ch: word)
            if (ch >= 'A' && ch <= 'Z') return false;
        return true;
    }
    bool isFirstCapital(string &word) {
        int n = word.size();
        if (word[0] >= 'a' && word[0] <= 'z') return false;
        for (int i=1; i<n; i++)
            if (word[i] >= 'A' && word[i] <= 'Z') return false;
        return true;
    }
};
