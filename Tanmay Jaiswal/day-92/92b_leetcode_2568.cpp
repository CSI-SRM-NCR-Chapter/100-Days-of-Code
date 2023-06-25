class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        unordered_set<int> s;
        for (auto i: nums) s.insert(i);

        int pow = 1;
        while (pow <= 1e9) {
            if (s.find(pow) == end(s)) return pow;
            pow *= 2;
        }

        return pow;
    }
};
