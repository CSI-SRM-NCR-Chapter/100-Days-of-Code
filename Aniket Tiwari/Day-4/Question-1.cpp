#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        int j=1;

        while(i<nums.size()){
            while(i<nums.size()&&nums[i]==nums[i-1]){
                i++;
            }
            if(i<nums.size())
            nums[j++]=nums[i++];
            
        }
        return j;
    }
};