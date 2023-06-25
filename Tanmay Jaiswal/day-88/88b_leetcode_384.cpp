class Solution {
    vector<int>a;
public:
    Solution(vector<int>& nums) {
        a = nums;
    }
    
    vector<int> reset() {
        return a;
    }
    
    vector<int> shuffle() {
        vector<int> x = a;
        int n = a.size();
        int j = n;

        for (int i=n-1; i>=0; i--) {
            int k = rand()%j;
            swap(x[i], x[k]);
            j--;
        }

        return x;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
