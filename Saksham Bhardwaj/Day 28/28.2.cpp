class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int ki;
    KthLargest(int k, vector<int>& nums) {
        //int x= nums.size()-k+1;
        ki=k;
        int x= min(k,(int)nums.size());
        for (int i=0; i<x; i++)pq.push(nums[i]);
        for (int i=k; i<nums.size(); i++){
            if (nums[i] > pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
    }
    
    int add(int val) {
        if (pq.size() < ki){
            pq.push(val);
            return pq.top();
        }
        if (val> pq.top()){
            pq.pop();
            pq.push(val);
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
