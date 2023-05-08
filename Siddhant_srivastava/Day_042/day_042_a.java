class Solution {
    public int[] searchRange(int[] nums, int target) {
        int ind[]={-1,-1};
        int c=0,k=0;
        if(nums.length==0)
            return ind;
        for(int i= 0;i<nums.length;i++)
        {
            if(nums[i]==target&&c==0)
            {ind[0]=i;c++;}
            if(nums[nums.length-1-i]==target&&k==0)
            {ind[1]=nums.length-1-i;k++;}}
            return ind;
    }}