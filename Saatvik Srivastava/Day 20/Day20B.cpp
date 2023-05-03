class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        // put element in set
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());

        vector<vector<int>> ans(2);

        // use of count in set 
        for(auto i : s1){
            // agar s2 mei i nahi hai to push karo ,count return 1   if present or 0 if not present
            if(s2.count(i)==0){
                ans[0].push_back(i);
            }
        }
        for(auto i : s2){
           
            if(s1.count(i)==0){
                ans[1].push_back(i);
            }
        }
        return ans;
    }
};
