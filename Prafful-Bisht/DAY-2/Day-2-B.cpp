class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        vector<int>nums(m+n);
        while(i<m && j<n){
            if(nums1[i]>=nums2[j]){
            nums[k]=nums2[j];
            k++;j++;
            }
            else{
                nums[k] = nums1[i];
                k++;i++;
            }
        }
        while(i<m){
            nums[k]=nums1[i];
            k++;i++;
        }
        while(j<n){
            nums[k]=nums2[j];
            k++;j++;
        }
        for(int p=0;p<m+n;p++){
            nums1[p]=nums[p];
        }
    }
};