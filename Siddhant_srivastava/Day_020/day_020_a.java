class Solution {
    public int countHillValley(int[] nums) {
        int arr[] = removeAdjacentDuplicates(nums); 
        int c=0;
        for(int i = 1;i<arr.length-1;i++)
        {
            if(arr[i-1]<arr[i]&&arr[i]>arr[i+1])
            c++;
            else if(arr[i-1]>arr[i]&&arr[i]<arr[i+1])
            c++;
        }
        return c;
    }
    public static int[] removeAdjacentDuplicates(int[] nums) {
    if (nums == null || nums.length == 0) {
        return new int[0];
    }
    int[] result = new int[nums.length];
    int j = 0;
    for (int i = 0; i < nums.length; i++) {
        if (i == 0 || nums[i] != nums[i - 1]) {
            result[j++] = nums[i];
        }
    }
    return Arrays.copyOf(result, j);
}

}