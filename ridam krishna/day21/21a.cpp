class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i,j;
        for(auto x: nums1){
            for(i=0; i<nums2.size(); i++){
                if(x==nums2[i]){
                    for(j=i; j<nums2.size(); j++){
                        if(nums2[i]<nums2[j]){
                            ans.push_back(nums2[j]);
                            break;
                        }
                        if(j==nums2.size()-1) ans.push_back(-1);
                    }
                    
                }
            }
        }
        return ans;
    }
};
