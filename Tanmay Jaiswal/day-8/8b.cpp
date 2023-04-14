class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for (int i=0; i<n; i++) {
            int x = target - numbers[i];
            int y = lower_bound(numbers.begin()+i+1, numbers.end(), x) - numbers.begin();

            if (y < n and numbers[i]+numbers[y] == target) return {i+1, y+1};
        }

        return {};
    }
};
