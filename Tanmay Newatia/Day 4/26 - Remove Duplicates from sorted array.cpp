class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        int j=0;
        for(auto i:nums){
            if(mp[i]==0){
                nums[j]=i;
                j++;
                mp[i]++;
            }
        }
        return j;
    }
};