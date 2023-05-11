// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> m;
        vector<int> result(2,0);
        for (int i = 0; i < nums.size(); ++i) {
            int find = target - nums[i];
            if (m.find(find) != m.end()) {
                result[0] = i;
                result[1] = m[find];
                return result;
            }
            m[nums[i]] = i;
        }
        return result;
    }
};
