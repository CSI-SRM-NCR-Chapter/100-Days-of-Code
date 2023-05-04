class Solution {
public:
    string toLowerCase(string s) {
        for (auto &i :s)
            if (i >= 'A' and i <= 'Z') 
                i += 32;

        return s;
    }
};