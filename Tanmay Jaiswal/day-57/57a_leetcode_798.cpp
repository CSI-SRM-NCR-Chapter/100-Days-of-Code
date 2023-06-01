class Solution {
public:
    int bestRotation(vector<int>& nums) {
        int n = nums.size();
        vector<int> badIdx(n);

        for (int i = 0; i < n; ++i) {
            int left = (i - nums[i] + 1 + n) % n;
            int right = (i + 1) % n;

            badIdx[left]--;
            badIdx[right]++;

            if (left > right)
                badIdx[0]--;
        }

        int best = -n;
        int ans = 0, cur = 0;

        for (int i = 0; i < n; ++i) {
            cur += badIdx[i];
            if (cur > best) {
                best = cur;
                ans = i;
            }
        }
        return ans;
    }
};
