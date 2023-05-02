class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int mydistance = abs(target[0]) + abs(target[1]);
        
        int minghostdistance = 1e9;
        for (auto x: ghosts)
            minghostdistance = min(minghostdistance, abs(x[0]-target[0]) + abs(x[1]-target[1]))

        return mydistance < minghostdistance;
    }
};
