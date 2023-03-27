class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int q=m-1;
        int r=n-1;
        int k= m+n-1;
        while(q>=0&&r>=0)
        {
            if(nums1[q]>nums2[r])
            {
                nums1[k--]=nums1[q--];
            }
            else{
                nums1[k--]=nums2[r--];
            }
        }
        while(q>=0){
            nums1[k--]=nums1[q--];
        }
        while(r>=0){
            nums1[k--]=nums2[r--];
        }
    }
};