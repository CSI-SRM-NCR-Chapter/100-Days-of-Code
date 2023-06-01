class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sublen = 1e6;

        int i = 0, j = 0, sum = 0;
        
        while (j<n) {
            if (sum < target) sum += nums[j++];
            while (sum >= target) {
                sublen = min(sublen, j-i);
                sum -= nums[i++];
            }
        }

        return sublen == 1e6? 0 : sublen;
    }
};
