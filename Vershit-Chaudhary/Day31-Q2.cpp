class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int target_dist=abs(target[0])+abs(target[1]);
        for(int i=0;i<ghosts.size();i++){
            int x=abs(target[0]-ghosts[i][0])+abs(target[1]-ghosts[i][1]);
            if(target_dist>=x){
                return false;
            }
        }
        return true;
    }
};
