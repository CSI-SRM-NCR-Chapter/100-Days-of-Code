class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int a;
    KthLargest(int k, vector<int>& nums) {
        a = k;
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
        if (pq.size() < a){
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
