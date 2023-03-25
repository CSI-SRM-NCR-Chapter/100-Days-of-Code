class Solution {
    public int removeDuplicates(int[] arr) {
        int res = 0;
        for(int i =0;i<arr.length;i++){
            if(arr[i] != arr[res]){
                res++;
                arr[res] = arr[i];
            }
        }
        return res+1;
    }
}
