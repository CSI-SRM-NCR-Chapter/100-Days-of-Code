class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int n=candies.size();
        int mx=*max_element(begin(candies), end(candies));
        for(int i=0; i<n; i++){
            if(candies[i]+extraCandies>=mx) res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};
