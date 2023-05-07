class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        for(auto x: nums){
            v.push_back(x*x);
        }
        sort(begin(v), end(v));
        return v;
    }
};
