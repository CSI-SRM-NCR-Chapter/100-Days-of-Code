class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int csum = 0;

        map<int, int> sum = {{0, 1}};
        int res = 0;

        for (auto i: nums) {
            csum += i;
            if (sum.find(csum-k) != end(sum)) res += sum[csum-k];
            sum[csum]++;
        }

        return res;
    }
};
