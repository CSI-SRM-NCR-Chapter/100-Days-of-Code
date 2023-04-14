class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int n =nums.length;
        int count =0;
       int  maxcount = 0;
        for(int i =0;i< n;i++){
            if(nums[i]==0){
                count = 0;
            }
            else{
                count++;
                maxcount = (Math.max(maxcount, count));
            }
        }
        return maxcount;
    }
}
