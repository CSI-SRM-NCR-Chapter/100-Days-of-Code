int cnt[100000];
int speedup = []{ios::sync_with_stdio(0); cin.tie(0); return 0;}();

class Solution {
public:
    int bestRotation(vector<int>& nums) {
        int n = size(nums);
        memset(cnt, 0, sizeof(int) * n);
        for (int i = 0; i < n; ++i) {
            int v = nums[i], i2 = i-v;
            if (v > i) i2 += n;
            ++cnt[i]; --cnt[i2];
        }
        int best = -1, s = 0, bs = 0;
        for (int i = 0; i < n; ++i) if ((s += cnt[i]) > bs) bs = s, best = i;
        return best+1;
    }
};
