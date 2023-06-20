class Solution {
    vector<int>real, dummyVector;
public:
    Solution(vector<int>& nums) {
        dummyVector=real=nums;
    }
    
    vector<int> reset() {
        return real;
    }
    
    vector<int> shuffle() {
        int n=real.size();

        for(int i=0; i<n; i++){
            int x=rand()%n;
            swap(dummyVector[i], dummyVector[x]);
        }
        
        return dummyVector;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
