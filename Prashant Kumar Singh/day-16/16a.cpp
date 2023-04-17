class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(begin(nums1), end(nums1));
        sort(begin(nums2), end(nums2));

        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]) return nums1[i];
            }
        }
                
        int res = min(nums1[0], nums2[0]);
        int rem = max(nums1[0], nums2[0]);
        res = (res * 10) + rem;
        
        return res;
    }
};
