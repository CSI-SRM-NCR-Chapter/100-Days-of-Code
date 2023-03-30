class Solution {
    public int removeDuplicates(int[] nums) {
        int k=0;
        for(int i=0; i<nums.length-1; i++){
            if(nums[i] == nums[i+1]){
                k++;
            }else{
                nums[i-k+1]=nums[i+1];
            }
        }
        return nums.length-k;
    }
}
