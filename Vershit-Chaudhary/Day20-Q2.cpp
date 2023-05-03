class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        for(int i=0;i<nums1.size();i++){
            if(count(nums2.begin(),nums2.end(),nums1[i])==0 && count(ans[0].begin(),ans[0].end(),nums1[i])==0){
                ans[0].push_back(nums1[i]);
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(count(nums1.begin(),nums1.end(),nums2[i])==0 && count(ans[1].begin(),ans[1].end(),nums2[i])==0){
                ans[1].push_back(nums2[i]);
            }
        }
        return ans;
    }
};
