class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {int max =-1;int c = 0;
        for(int i = 0;i<nums.length;i++)
        if(nums[i]==1)
        c++;
        else
        {
            max = Math.max(c,max);
            c=0;
        }
        return Math.max(c,max);
    }
}