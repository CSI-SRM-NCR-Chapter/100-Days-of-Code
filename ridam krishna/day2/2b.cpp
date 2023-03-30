class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int a=m,i=0;a<m+n;a++,i++){
            nums1[a]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};
