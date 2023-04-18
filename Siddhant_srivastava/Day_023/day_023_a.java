class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] arr = new int[nums1.length+nums2.length];
        for (int i = 0; i < nums1.length; i++)
            arr[i] = nums1[i];
        for (int i = 0; i < nums2.length; i++) {
            arr[nums1.length + i] = nums2[i];
}
        Arrays.sort(arr);
        int x =arr.length;
        if(x%2!=0)
        return arr[(x)/2];
        return ( (double) arr[(x)/2] + arr[(x-1)/2])/2 ;
        }
}