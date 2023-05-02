class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0) p.push_back(nums[i]);
            else n.push_back(nums[i]);
        }
        nums.clear();
        for(int j=0; j<p.size(); j++){
            nums.push_back(p[j]);
            nums.push_back(n[j]);
        }
        return nums;
    }
};
