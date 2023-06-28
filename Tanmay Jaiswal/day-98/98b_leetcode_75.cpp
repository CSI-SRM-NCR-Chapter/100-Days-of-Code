class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n-1;
        int i = 0;

        while (i<=r) {
            if (nums[i] == 0) swap(nums[i++], nums[l++]);
            else if (nums[i] == 2) swap(nums[i], nums[r--]);
            else i++;
        }
    }
};
