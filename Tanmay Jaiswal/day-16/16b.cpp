class Solution {
public:

    int unfairness = INT_MAX;

    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> ans(k,0);
        int n = cookies.size();
        
        solver(cookies, k, ans, n-1);
        return unfairness;
    }

    void solver(vector<int>& cookiesArray, int kChildren, vector<int>& unfairnessArray, int indexOfArray) 
    {
        if (indexOfArray < 0) {
            int maxValue = 0;
            for (auto i:unfairnessArray) maxValue = max(maxValue, i);
            unfairness = min(maxValue, unfairness);
            return;
        }

        for (int i=0; i<kChildren; i++) {
            unfairnessArray[i] += cookiesArray[indexOfArray];
            solver(cookiesArray, kChildren, unfairnessArray, indexOfArray-1);
            unfairnessArray[i] -= cookiesArray[indexOfArray];
        }
    }
};
