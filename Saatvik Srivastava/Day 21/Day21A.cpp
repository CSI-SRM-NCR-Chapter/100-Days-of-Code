class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;
        for(int i=0; i<nums2.size(); i++) mp[nums2[i]] = i;
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++) {
            int id = mp[nums1[i]], fl = 1;
            for(int j=id; j<nums2.size(); j++) {
                if(nums2[j] > nums1[i]) {
                    ans.push_back(nums2[j]);
                    fl = 0;
                    break;
                }
            }
            if(fl) ans.push_back(-1);
        }
        return ans;
    }
};
