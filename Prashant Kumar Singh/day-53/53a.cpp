class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int plen = pref.size();
        int count = 0;

        for (auto i: words)
            if (i.size()>=plen and pref == i.substr(0, plen)) 
                count++;

        return count;
    }
};
