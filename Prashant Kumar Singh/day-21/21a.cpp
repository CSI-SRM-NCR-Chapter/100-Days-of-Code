class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        map<int,int> mp;

        for(int i=0; i<nums2.size(); i++){

            mp[nums2[i]]=i;

        }

        int temp;

        for(int i=0; i<nums1.size(); i++)

        {
            temp=mp[nums1[i]];

            for(;temp<nums2.size();temp++){

               if(nums2[temp]>nums1[i]){

                   ans.push_back(nums2[temp]);

                   break;

               }

            }

            if(temp==nums2.size()){

                ans.push_back(-1);

            }

        }
        
        return ans;
    }
};
