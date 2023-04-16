class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        merged.resize(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),merged.begin());
        if(merged.size()%2) return (double)merged[merged.size()/2];
        return (((double)merged[merged.size()/2])+((double)merged[merged.size()/2-1]))/2.0;
    }
};
