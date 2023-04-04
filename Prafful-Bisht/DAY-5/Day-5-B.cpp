class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // O(n)(insertion operation take O(n)) unorderset check size with original

        unordered_set<int>st;
        st.insert(nums.begin(),nums.end());
        if(nums.size()==st.size()) return false;
        else{
            return true;
        }
    }
    
};