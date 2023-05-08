class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int val=-1;
        int ans[]=new  int [nums1.length];
        for(int i=0;i<nums1.length;i++)
        {
            for(int j = findIndex(nums2, nums1[i]);j<nums2.length&val==-1;j++)
                if(nums1[i]<nums2[j])
                    val=nums2[j];
            ans[i]=val;val=-1;
        }
        return ans;
    }
    public static int findIndex(int arr[], int t)
    {
        int i = 0;
        while (i < arr.length)
            if (arr[i] == t)
                return i;
            else
                i = i + 1;
        return -1;
    }
}