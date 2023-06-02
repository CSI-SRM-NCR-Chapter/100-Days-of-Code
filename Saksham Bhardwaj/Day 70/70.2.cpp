class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> num_to_count_map;
        for (const int num: nums) {
            if (num_to_count_map.count(num) > 0) ++num_to_count_map[num];
            else num_to_count_map[num] = 1;
        }

        for (const auto& [num, count] : num_to_count_map) {
            if (count == 1) return num;
        }

        return -1;
    }
};
