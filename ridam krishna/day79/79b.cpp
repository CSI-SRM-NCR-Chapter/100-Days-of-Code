class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int mn1=INT_MAX;
        int mn2=INT_MAX;
        int x=ops.size();
        if(ops.size()==0) return m*n;
        for(int i=0; i<x; i++){
            mn1=min(mn1,ops[i][0]);
            mn2=min(mn2,ops[i][1]);
        }
        return mn1*mn2;
    }
};
