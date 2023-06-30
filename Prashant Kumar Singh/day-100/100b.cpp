class Solution {
public:
    int sumOfPower(vector<int>& nums) {
        long long ans=0, s=0, base = 1e9 + 7;
        sort(nums.begin(), nums.end());
        for (int x: nums) {
            ans = (ans + (s + x) * x % base * x % base) % base;
            s = (s * 2 + x) % base;
        }
        return ans;
    }
};
