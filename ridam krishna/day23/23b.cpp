class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median=0;
        for(auto y: nums2){
            nums1.push_back(y);
        }
        sort(nums1.begin(),nums1.end());

        int n=nums1.size()/2;
        if(nums1.size()%2==1){
            median=nums1[n];
        }
        else median=(1.0*(nums1[n-1]+nums1[n]))/2;
        return median;
    }
};
