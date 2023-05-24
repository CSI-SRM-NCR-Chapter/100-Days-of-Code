class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> map;
        for(auto a : nums) {
            map[a]++;
        }
        
        for(auto b : map) {
            // search if any element is having differnce of 1
            auto found = map.find(b.first+1);
            // If such combination exist
            if(found != map.end()) {
                ans = max(ans, b.second+found->second); // then find the sum of current frequency and consecutive element frequency
            }
        }
        return ans;
    }
};
