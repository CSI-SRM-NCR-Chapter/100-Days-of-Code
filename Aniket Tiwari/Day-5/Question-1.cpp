#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int votes=0,candidate=-1;
       int n=nums.size();
       for(int i=0;i<n;i++){
           if(votes==0){
               votes=1;
               candidate=nums[i];
           }
           else{
               if(nums[i]==candidate)
               votes++;
               else
               votes--;
           }
       }
      
      
       return candidate;
     
    }
};