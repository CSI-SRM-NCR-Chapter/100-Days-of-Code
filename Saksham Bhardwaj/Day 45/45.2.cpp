class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) 
    { int l=0,r=0,i,n,an;
     vector<int> ans;
     n=nums.size();
     for(i=0;i<n;i++)
     {
          r=r+nums[i];
     }
     for(i=0;i<n;i++)
      { 
        r=r-nums[i];
        an=abs(l-r);
        ans.push_back(an);
        l=l+nums[i];
       
      }
      return ans;   
    }
};
