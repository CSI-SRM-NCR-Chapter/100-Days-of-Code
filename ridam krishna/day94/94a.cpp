class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> st(begin(nums), end(nums));
        vector<int> res;
        int n=nums.size();
        for(int i=1; i<=n; i++){
            if(st.find(i)==st.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};
