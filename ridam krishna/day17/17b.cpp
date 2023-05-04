class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int> mp;
        for(auto x: nums){
            mp[x]++;
        }
        for(auto a: mp){
            if(a.second==2) v.push_back(a.first);
        }
        return v;
    }
};
