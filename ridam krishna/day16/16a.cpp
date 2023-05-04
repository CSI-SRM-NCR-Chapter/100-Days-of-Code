class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        for(auto x: nums1){
            for(int i=0; i<nums2.size(); i++){
                if(x==nums2[i]) return x;
            }
            
        }
        if(nums1[0]<nums2[0]) return nums1[0]*10+nums2[0];
        return nums2[0]*10+nums1[0];
    }
};
