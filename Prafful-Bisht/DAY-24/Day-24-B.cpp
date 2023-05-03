class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0, right = n - 1;
        while (true) {
            int pos = partition(nums, left, right);
            if (pos == n - k) {
                return nums[pos];
            } else if (pos < n - k) {
                left = pos + 1;
            } else {
                right = pos - 1;
            }
        }
    }
    
private:
    int partition(vector<int>& nums, int left, int right) {
        int pivot = nums[right];
        int i = left;
        for (int p = left; p < right; p++) {
            if (nums[p] <= pivot) {
                swap(nums[i], nums[p]);
                i++;
            }
        }
        swap(nums[i], nums[right]);
        return i;
    }
};