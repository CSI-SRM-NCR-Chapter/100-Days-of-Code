class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;

        int minn = nums[0], maxx = nums[0];
        for (auto i: nums) {
            minn = min(minn, i);
            maxx = max(maxx, i);
        }

        int gap = ceil((1.0*maxx - 1.0*minn)/(n-1));
        if (gap < 1) gap = 1;

        vector<pair<int, int>> arr(n, {INT_MAX, INT_MIN});
        for (auto i: nums) {
            int pos = (i-minn)/gap;
            arr[pos].first = min(arr[pos].first, i);
            arr[pos].second = max(arr[pos].second, i);
        }

        int prev = minn;
        int res = 0;
        for (auto i: arr) {
            if (i.first == INT_MAX) continue;
            res = max(res, i.first-prev);
            prev = i.second;
        }

        return res;
    }
};
