class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        vector<pair<int, int>> vec;
        for (int i=0; i<nums.size(); i++) 
            vec.push_back({nums[i], cost[i]});

        sort(begin(vec), end(vec));
        
        long long sum = 0;
        for (auto i:cost) sum += 1ll*i;

        long long csum = 0;
        int j=0;
        while (csum < (sum+1)/2 && j<nums.size()) {
            csum += 1ll*vec[j].second;
            j++;
        }
        
        long long res = 0;
        for (int i=0; i<nums.size(); i++) {
            res += 1ll*abs(vec[j-1].first - vec[i].first) * vec[i].second;
        }

        return res;
    }
};
