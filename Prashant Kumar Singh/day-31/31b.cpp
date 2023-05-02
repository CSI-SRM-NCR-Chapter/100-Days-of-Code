class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int min_dist = INT_MAX;
        for(auto x: ghosts){
            min_dist = min(min_dist, abs(x[0]-target[0]) + abs(x[1]-target[1]));
        }
        int my_dist = abs(0-target[0]) + abs(0-target[1]);
        return my_dist < min_dist;
    }
};
