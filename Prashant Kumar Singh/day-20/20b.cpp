class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>> ans;

        vector<int> temp1, temp2;

        unordered_set<int> set;

        int i, j;

        int n = nums1.size();

        int m = nums2.size();

        for(i=0; i<n; i++){

            bool flag = true; //present nahi hai aisa consider kiye hai

            for(j=0; j<m; j++){

                if (nums1[i] == nums2[j]) {

                    flag = false;

                    break;
                }
            }

            if(flag == true && set.find(nums1[i])==set.end()) {
                set.insert(nums1[i]);
                temp1.push_back(nums1[i]);
            }

        }

        set.clear();

        for(j=0; j<m; j++){

            bool flag = true; //present nahi hai aisa consider kiye hai

            for(i=0; i<n; i++){

                if (nums2[j] == nums1[i]) {

                    flag = false;

                    break;
                }
            }

            if(flag == true && set.find(nums2[j])==set.end()){
                temp2.push_back(nums2[j]);
                set.insert(nums2[j]);
                
            }

        }
        
        ans.push_back(temp1);
        ans.push_back(temp2);
        return ans;
    }
};
