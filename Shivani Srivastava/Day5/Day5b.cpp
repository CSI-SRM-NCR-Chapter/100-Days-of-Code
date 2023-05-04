class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        for(auto x:nums){
            st.insert(x);
        }
        if(nums.size()==st.size()){
            return false;
        }
        else{
            return true;
        }
    }
};