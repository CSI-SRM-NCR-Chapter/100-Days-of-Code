class Solution {
    fun singleNumber(nums: IntArray): Int {
        var res=0;
        for(i in nums.indices)
            res=res xor nums[i];
        
        return res;
    }
}
