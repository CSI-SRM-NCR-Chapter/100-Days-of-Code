class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> s2;
        vector<vector<int>> v(2);
        for(auto x: nums1) s1.insert(x);
        for(auto y: nums2) s2.insert(y);
        for(auto a: s1){
            if(s2.find(a)==s2.end()) v[0].push_back(a);
        }
        for(auto b: s2){
            if(s1.find(b)==s1.end()) v[1].push_back(b);
        }
        return v;
    }
};
