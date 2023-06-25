class Solution {
public:
    vector<int> temp1, temp2;
    Solution(vector<int>& nums) {
        temp1 = temp2 = nums;
    } 
    
    vector<int> reset() {
        return temp1;
    }
    
    vector<int> shuffle() {
        int t1 = rand() % temp1.size();
        int t2 = rand() % temp1.size();
        swap(temp2[t1], temp2[t2]);
        return temp2;
    }
};
