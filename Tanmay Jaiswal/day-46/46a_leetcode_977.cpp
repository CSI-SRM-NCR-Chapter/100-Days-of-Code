class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        int l = a.size();
        for(int i = 0; i < l; i++) a[i] *= a[i];
        sort(a.begin(), a.end());
        
        return a;
    }
};
