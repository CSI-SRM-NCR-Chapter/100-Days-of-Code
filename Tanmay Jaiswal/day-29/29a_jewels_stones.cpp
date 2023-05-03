class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int> s;
        for (auto i: jewels) s.insert(i);
        
        int count = 0;
        for (auto i:stones) {
            if (s.find(i) != s.end()) count++;
        }

        return count;
    }
};
