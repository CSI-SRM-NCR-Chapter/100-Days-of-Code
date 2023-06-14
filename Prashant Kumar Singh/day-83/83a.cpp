class Solution {
public:
    int equalPairs(vector<vector<int>>& v) {
        int res=0;
        vector<vector<int>> c = v;
        for(int i=0; i<v.size(); i++){
            for(int j=i; j<v.size(); j++)
                swap(v[i][j], v[j][i]);
        }
        for(int i=0; i<v.size(); i++){
            for(int j=0; j<v.size(); j++)
                if(v[i] == c[j]) res++;
        }
        return res;
    }
};
