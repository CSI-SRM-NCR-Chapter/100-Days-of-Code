class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res=0;
        for(auto x: nums) mp[x]++;
        for(auto y: mp) if(y.second==1) res=y.first;
        return res;
    }
};
