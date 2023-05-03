class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            int j=find(nums2.begin(),nums2.end(),nums1[i])-nums2.begin();
            for(int k=j+1;k<nums2.size();k++){
                if(nums2[k]>nums1[i]){
                    ans[i]=nums2[k];
                    break;
                }
            }
        }
        return ans;
    }
};
