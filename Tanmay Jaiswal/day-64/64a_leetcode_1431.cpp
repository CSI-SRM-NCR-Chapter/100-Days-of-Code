class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        auto maxx = max_element(begin(candies), end(candies));
        vector<bool> ans;

        for (auto i:candies) {
            ans.push_back((i+extraCandies >= *maxx? true:false));
        }

        return ans;
    }
};
