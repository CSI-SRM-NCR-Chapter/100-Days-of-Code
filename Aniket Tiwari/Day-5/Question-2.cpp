#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> ma;
        for(int i:nums){
            ma[i]+=1;
        }
        for(auto it:ma){
            if(it.second>1)
            return true;
        }
        return false;
    }
};