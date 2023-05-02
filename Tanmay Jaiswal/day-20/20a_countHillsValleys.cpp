class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int left, curr, right;
        left = curr = right = 1;

        int count = 0;
        int n = nums.size();

        while (curr < n-1) {
            // left closest
            while (left >= 0 and nums[left] == nums[curr]) left--;
            // right closest
            while (right <= n-1 and nums[right] == nums[curr]) right++;

            if (left >= 0 and right <= n-1) {
                // valley
                if (nums[left] > nums[curr] and nums[right] > nums[curr]) count++;
                // hill
                else if (nums[left] < nums[curr] and nums[right] < nums[curr]) count++;
            }

            curr = right;
            left = curr - 1;
            right = curr + 1;
        }

        return count;
    }
};