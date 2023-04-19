class Solution {
    
    public void reverse(int arr[],int f,int l){
        while(f<l){
            int temp = arr[f];
            arr[f]= arr[l];
            arr[l]=temp;
            f++;
            l--;
        }
    }
    public void rotate(int[] nums, int k) {
         k =k%nums.length;
        //part1
        reverse(nums,0,nums.length-k-1);
        // part 2
                reverse(nums,nums.length-k,nums.length-1);
        // part 3
        reverse(nums,0,nums.length-1);



    }
}
