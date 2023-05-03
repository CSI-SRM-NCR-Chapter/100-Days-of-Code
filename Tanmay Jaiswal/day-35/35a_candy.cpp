class Solution {
public:
    int candy(vector<int>& ratings) {
        // two pass algo
        int n = ratings.size();
        vector<int> candies(n,1);

        for (int i=1; i<n; i++) {
            if (ratings[i-1] < ratings[i]) {
                candies[i] = max(candies[i], candies[i-1]+1);
            }
        }

        for (int i=n-2; i>=0; i--) {
            if (ratings[i] > ratings[i+1]) {
                candies[i] = max(candies[i], candies[i+1]+1);
            }
        }

        return accumulate(begin(candies), end(candies), 0);
    }
};
