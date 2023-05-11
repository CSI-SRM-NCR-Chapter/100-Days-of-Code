class Solution {
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> v(cards.begin(), cards.end());
        return dfs(v);
    }

    bool dfs(vector<double> &v){
        if(v.size()==1){
            return abs(v[0] - 24)<0.0001;
        }
        for(int i=0; i<v.size(); i++){
            for(int j=i+1; j<v.size(); j++) {
                vector<double> v1;
                for(auto x: cp(v[i], v[j])){
                    v1.clear();
                    v1.push_back(x);
                    
                    for(int k=0; k<v.size(); k++)
                        if(k!=i && k!=j) v1.push_back(v[k]);
                    if(dfs(v1)) return true;
                }
            }
        }
        return false;
    }
    vector<double> cp(double x, double y) {
        return {x+y, x-y, y-x, x*y, x/y, y/x};
    }
};
