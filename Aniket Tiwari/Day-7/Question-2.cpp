#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        int p1=0,p2=0;
        while(p1<nums.size()){
            if(nums[p1]==0){
                p1++;
                count++;
            }
            else{
                nums[p2++]=nums[p1++];
            }
        }
        while(p2<nums.size()){
            nums[p2++]=0;
        }
    }
};