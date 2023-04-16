class Solution {
    public int missingNumber(int[] nums){
        // APPLYING CYCLIC SORT
        int i = 0;
        while (i < nums.length){
            int correct = nums[i];//BECAUSE RANGE STARTS FROM 0 AND NOT FROM 1.
            if (nums[i]<nums.length && nums[i]!=nums[correct]){
                swap(nums, i, correct);
            }
            else{
                i++;
            }
        }
//        CHECKING FOR MISSING NUMBER
        for (int index=0; index<nums.length; index++){
            if (nums[index] != index){
                return index; // returning index because here, index = missing value
            }
        }
        return nums.length;
    }

    // SWAPPPING FUNCTION
    public void swap(int[] nums, int first, int second){
        int temp = nums[first];
        nums[first] = nums[second];
        nums[second] = temp;
    }
}