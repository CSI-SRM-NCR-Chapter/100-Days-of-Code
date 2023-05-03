class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int my_distance = abs(target[0]) + abs(target[1]);
        for(auto g : ghosts) 
        {
            if(abs(g[0]-target[0]) + abs(g[1]-target[1]) <= my_distance) 
                return false;
        }
        return true;
    }
};
