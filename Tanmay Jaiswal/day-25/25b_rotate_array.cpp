class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;
        reverse(begin(nums), end(nums));

        int len = min(n, k);
        for (int i = 0; i < len / 2; i++)
            swap(nums[i], nums[len - 1 - i]);

        reverse(begin(nums) + k, end(nums));
    }
};