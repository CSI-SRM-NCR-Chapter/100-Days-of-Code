class Solution {
    public int[] twoSum(int[] nums, int target) {
        int arr[] = new int[2];
        HashMap<Integer,Integer>  mp = new HashMap<>();
        for(int i=0;i<nums.length;i++){
            if(mp.containsKey(target-nums[i])){
                arr[0] = i;
                arr[1] = mp.get(target-nums[i]);
            }
            mp.put(nums[i],i);
        }
        return arr;
    }
}
