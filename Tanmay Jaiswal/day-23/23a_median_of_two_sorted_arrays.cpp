class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        int i=0, j=0;
        
        int len = m+n;
        int midlen = len/2;
        int midsum = 0;

        bool flag = 1; // even
        if (len%2) flag = 0; // odd

        while (i<m and j<n and midlen > -1) {
            midlen--;

            if (nums1[i] < nums2[j]) {
                if (flag and midlen == 0 || midlen == -1) midsum += nums1[i];
                i++;
            }
            else {
                if (flag and midlen == 0 || midlen == -1) midsum += nums2[j];
                j++;
            }
        }

        while (i<m and midlen >= 0) {
            midlen--;
            if (flag and midlen == 0 || midlen == -1) midsum += nums1[i];
            i++;
        }

        while (j<n and midlen >= 0) {
            midlen--;
            if (flag and midlen == 0 || midlen == -1) midsum += nums2[j];
            j++;
        }

        if (flag) return (1.0*midsum)/2; // even
        return (1.0 * midsum); // odd
    }
};
