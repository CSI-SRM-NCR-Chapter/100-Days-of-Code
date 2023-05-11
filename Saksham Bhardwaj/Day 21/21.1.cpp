class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int x=nums1.size();
        int y=nums2.size();
        vector<int> res;
        for(int i=0;i<x;i++)
        {
            auto it = find(nums2.begin(),nums2.end(),nums1[i]);

            int index = it - nums2.begin(); 
            int var = -1;

           for(int j = index+1; j<y;j++)
           {
               if(nums2[j] > nums2[index])
               {
                   var = nums2[j];
                   break;
               }
              
           }
            res.push_back(var);
        }
        return res;
    }
};
