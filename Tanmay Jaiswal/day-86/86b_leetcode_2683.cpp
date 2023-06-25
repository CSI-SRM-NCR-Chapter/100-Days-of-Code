class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int xoor = 0;
        for (auto i: derived) xoor ^= i;
        return !xoor;
    }
};
