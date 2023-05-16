class Solution {
public:

    bool judgePoint24(vector<int>& cards) {
        vector<double> v(cards.begin(), cards.end());
        return dfs(v);
    }

    bool dfs(vector<double> &v){
        if(v.size()==1) return abs(v[0] - 24) < 0.0001;
        
        for(int i=0; i < v.size(); i++) {
            for(int j=i+1; j < v.size(); j++) {

                vector<double> next;
                for(auto num: compute(v[i], v[j])) {

                    next.clear();
                    next.push_back(num);
                    for(int k=0; k < v.size(); k++)
                        if(k!=i && k!=j) next.push_back(v[k]);

                    if(dfs(next)) return true;
                }
            }
        }
        return false;
    }
    
    vector<double> compute(double x, double y) {
        return {x+y, x-y, y-x, x*y, x/y, y/x};
    }
};
