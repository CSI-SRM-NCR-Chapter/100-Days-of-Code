class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
         int my_distance_from_target = abs(target[0]) + abs(target[1]);
        for( auto &g : ghosts )
        {
            if( my_distance_from_target >= ( abs(g[0] - target[0]) + abs(g[1] - target[1])) )
            return false;
        }
        return true;
    }
};