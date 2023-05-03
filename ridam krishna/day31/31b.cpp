class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& g, vector<int>& t) {
        int d=INT_MAX;
        int e;
        for(auto x: g){
            d=min(d, abs(x[0]-t[0])+abs(x[1]-t[1]));
            e=abs(0-t[0])+abs(0-t[1]);

        }
        return e<d;
    }
};
