int removeDuplicates(int* nums, int numsSize){
    int count=1,temp=nums[0],k=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=temp){
            k++;
            nums[k]=nums[i];
            temp=nums[i];
            count++;
        }
    }
    return count;
}
