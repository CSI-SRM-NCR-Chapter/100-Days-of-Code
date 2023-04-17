class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int len = numbers.length;
        for(int i = 0; i < len-1; i++){
            int find = target - numbers[i];
            for(int j = i + 1; j < len; j++){
                if(numbers[j] == find){
                    return new int[]{i + 1, j + 1};
                }else if(numbers[j] > find)
                    break;
            }
        }
        return null;
    }
}