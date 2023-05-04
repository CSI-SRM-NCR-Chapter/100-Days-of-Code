class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
         vector<int> neg;
          vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] < 0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        int len = pos.size();
        for(int i=0;i<len;i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);

        }
        return ans;

        
    }
};
