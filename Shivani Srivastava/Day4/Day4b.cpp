class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> ans;
        for(auto i: nums){
            ans.insert(i);
        }
        int i=0;
        for(auto x:ans){
            nums[i]=x;
            i++;
        }

        return ans.size();
    }
};