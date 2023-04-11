class Solution {
    public int missingNumber(int[] nums) {Arrays.sort(nums);int i;
    if(nums[0]!=0)
    return 0;
    for( i = 1;i<nums.length;i++)
    if(i!=nums[i])
    return i;
    return (i);
    
    }
}