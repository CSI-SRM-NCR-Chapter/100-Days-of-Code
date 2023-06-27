class NumArray {
    vector<int> arr, psum;
    int n;
public:

    NumArray(vector<int>& nums) {
        n = nums.size();
        arr = psum = nums;
        psum[0] = arr[0];
        
        for (int i=1; i<n; i++) {
            psum[i] += psum[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        return psum[right]-psum[left]+arr[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
