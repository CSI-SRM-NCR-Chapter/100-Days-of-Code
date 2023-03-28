class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore's voting algo O(N)
        int count = 0;
        int ele = 0;
        for(int i=0;i<nums.size();i++){
            if(count == 0){
                ele = nums[i];
                count++;
            }
            else if(ele == nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return ele;
    }
};