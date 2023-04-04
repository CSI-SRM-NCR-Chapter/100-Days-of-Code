class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        var ans=IntArray(2)
        for(i in nums.indices){
            if(nums.contains(target-nums[i]) && nums.indexOf(target-nums[i])!=i){
                ans[0]=i;
                ans[1]=nums.indexOf(target-nums[i]);
                break;
            }
        }
        return ans;
    }
}
