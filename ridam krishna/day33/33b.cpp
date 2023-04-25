class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> temp;
        vector<int> v1;
        vector<vector<int>> v2;
        int tp=0;
        int i=0, j=0;
        for(auto x: mat){
            for(auto y: x){
                temp.push_back(y);
            }
        }
        if(r*c>temp.size() || r*c==1 || r*c!=temp.size()) return mat;
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                v1.push_back(temp[tp]);
                tp++;
            }
            v2.push_back(v1);
            v1.clear();
        }
        cout<<temp.size();
        // for(auto x: temp) cout<<x<<" "<<endl;
        return v2;
    }
};
