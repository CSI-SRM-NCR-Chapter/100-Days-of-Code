class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         priority_queue <int, vector<int>, greater<int>>q; 
        for(int i=0;i<k;i++){
            q.push(nums[i]);
        }

        
    for(int j =k;j<nums.size();j++){
        if(q.top()<nums[j]){
            q.pop();
            q.push(nums[j]);
        }

    }
    return q.top();
    }
};
