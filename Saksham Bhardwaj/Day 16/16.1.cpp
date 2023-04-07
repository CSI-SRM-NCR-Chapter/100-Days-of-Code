class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int n = nums1.size();
        int m = nums2.size();
        
        for(int i=0; i<n; i++) {
            int s = 0;
            int e = m-1;
            while(s <= e) {
                int mid = s+(e-s)/2;
                if(nums1[i] == nums2[mid]) return nums1[i];
                else if(nums1[i] > nums2[mid]) s = mid+1;
                else e = mid-1;
            }
        }
        
        int min1 = nums1[0];
        int min2 = nums2[0];
        
        if(min1 > min2) return min2*10 + min1;
        return min1*10 + min2;
        
    }
};
