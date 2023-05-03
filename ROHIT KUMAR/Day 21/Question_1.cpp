class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      vector <int> v;
      for(int i=0;i<nums1.size();i++ )
      {
        for(int j=0;j<nums2.size();j++)
        {
           
         if( nums1[i]==nums2[j] ) 
          {
              
            bool flag=true;

            if(j==nums2.size()-1)
            {
            v.push_back(-1);
            break;
            }
           
            else
            {
              for(int k=j+1;k<nums2.size();k++)
            {
             
             if(nums2[k]>nums2[j])
             {
               v.push_back(nums2[k]);
               flag=false;
               break;
             }
             
            }
          if(flag==true)
             {
              v.push_back(-1);
             }
            }  
          } 
         
        }
      } 
      return v;   
    }
};
