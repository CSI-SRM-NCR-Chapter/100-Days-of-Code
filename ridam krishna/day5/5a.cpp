class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //using boyer moore algorithm
        int i=0,count=1,candidate=nums[0];
        for(i=1; i<nums.size(); i++){
            if(candidate==nums[i]){
                count ++;
            }
            else {
                count--;
                if(count==0){
                    candidate=nums[i];
                    count = 1;
                }
            }
        }
    return candidate;
    }
};
