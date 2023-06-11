class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        auto [min_it, max_it] = minmax_element(nums.begin(), nums.end());
        return max(*max_it - *min_it - 2 * k, 0);
    }
};
