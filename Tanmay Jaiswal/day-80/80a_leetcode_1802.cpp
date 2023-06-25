class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int res = 0;
        int start = 1, end = maxSum;

        while (start <= end) {
            int mid = start + (end-start)/2;

            int i0 = mid - index;
            i0 = i0 <= 0? 1 : i0;

            int in = mid - (n-1-index);
            in = in <= 0? 1 : in;

            double sum0_m = ((1.0*mid-i0+1)/2 * (i0 + mid)) + index+1-mid+i0-1;
            double summ_n = ((1.0*mid-in+1)/2 * (mid + in)) + n-index-mid+in-1;

            if (sum0_m + summ_n - mid <= maxSum) {
                res = mid;
                start = mid+1;
            }
            else end = mid-1;
        }

        return res;
    }
};
