class KthLargest {
    int a;
    priority_queue<int, vector<int>, greater<int>> pq;
public:
    KthLargest(int k, vector<int>& nums) {
        this->a=k;
        for(auto x: nums) pq.push(x);
        
    }
    int add(int val) {
        pq.push(val);
        int s=pq.size()-a;
        while(s>0){
            pq.pop();
            s--;
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
