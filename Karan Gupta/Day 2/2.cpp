class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=m;
        for(int i=0;i<n;i++){
            nums1[k++]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};
