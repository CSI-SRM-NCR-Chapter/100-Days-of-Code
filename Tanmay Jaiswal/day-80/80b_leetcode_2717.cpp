class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        for (int x = 0; x<n; x++) {
            if (nums[x] == 1) i = x;
            if (nums[x] == n) j = x;
        }

        if (j < i) return i + n-j-2;
        return i + n-j-1;
    }
};
