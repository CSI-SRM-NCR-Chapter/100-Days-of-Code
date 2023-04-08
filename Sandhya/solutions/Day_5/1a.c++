class Solution {
public:
    int majorityElement(vector<int>& n) {
        sort(n.begin(),n.end());
        return n[n.size()/2];
    }
};