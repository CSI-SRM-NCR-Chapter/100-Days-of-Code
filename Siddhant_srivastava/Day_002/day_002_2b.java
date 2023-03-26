class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        for(int i = nums1.length-1;i>m-1;i--)
                if(nums1[i]>-1)
                nums1[i]=nums2[--n];
                Arrays.sort(nums1);
    }
}