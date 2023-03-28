class Solution {
    fun containsDuplicate(nums: IntArray): Boolean {
        if(nums.size==nums.toSet().size){
            return false
        }
        else{
            return true
        }
    }
}
