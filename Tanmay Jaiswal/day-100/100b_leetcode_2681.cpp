class Solution {
    const int mod = 1e9+7;
public:
    int sumOfPower(vector<int>& nums) {
        long long prev = 0;
        long long sum = 0;

        sort(begin(nums), end(nums));

        for (int i=0; i<nums.size(); i++) {
            if (i > 0) prev = (1LL*prev*2 + 1LL*nums[i-1]) % mod;
            sum = (sum + (1LL*nums[i]*nums[i])%mod * (1LL*nums[i] + prev)%mod) % mod;
        }

        return sum;
    }
};
