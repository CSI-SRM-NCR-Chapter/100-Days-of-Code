class Solution {
    public int singleNumber(int[] nums) {
        Arrays.sort(nums);
        if(nums.length>2&&nums[nums.length-1]>nums[nums.length-2])
        return nums[nums.length-1];
        if(nums.length>2)
        for(int i= 0;i<nums.length-1;i+=2)
        {if(nums[i]!=nums[i+1])
        return nums[i];
        }        return nums[0];
}}