class KthLargest {
    int kth;
    priority_queue<int, vector<int>, greater<int>> pq;

    public:
        KthLargest(int k, vector<int>& nums) {
            this->kth = k;
            for (auto i: nums) {
                this->pq.push(i);
            }
        }
        
        int add(int val) {
            pq.push(val);

            int x = pq.size() - kth;

            while (x > 0) {
                pq.pop();
                x--;
            }

            return pq.top();
        }
};
