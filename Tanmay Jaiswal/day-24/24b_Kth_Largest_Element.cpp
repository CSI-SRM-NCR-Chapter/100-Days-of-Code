class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        // used for finding kth smallest element that's why (n-k) 
        // to get the kth largest element.
        // (quickSort with a little tweak)
        return quickSelect(nums, 0, n-1, n-k); 
    }

    int quickSelect(vector<int>& arr, int left, int right, int k) {
        if (left <= right) {
            int pIndex = partition(arr, left, right);

            if (pIndex == k) return arr[pIndex];
            else if (pIndex < k) return quickSelect(arr, pIndex+1, right, k);
            else return quickSelect(arr, left, pIndex-1, k);
        }

        return -1;
    }

    int partition(vector<int> &arr, int left, int right) {
        int pivot = arr[right];
        int pos = left;

        for (int i=left; i<right; i++) {
            if (pivot >= arr[i]) swap(arr[i], arr[pos++]);
        }

        swap(arr[right], arr[pos]);
        return pos;
    }
};