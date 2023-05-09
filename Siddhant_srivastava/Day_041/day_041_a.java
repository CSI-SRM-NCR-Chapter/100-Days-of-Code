class Solution {
    public int arraySign(int[] nums) {
        int sign = (int)Math.signum(nums[0]);
        for(int a=1;a<nums.length;a++)
        {
            if(sign==0) 
                return 0;
            sign *= (int)Math.signum(nums[a]);
        }
        return sign;
    }
}