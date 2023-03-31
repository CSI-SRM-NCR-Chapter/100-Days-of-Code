class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int x=0; x<nums.size(); x++){
            if(nums[x]==0){
                count++;
                nums.erase(nums.begin()+x);
                x--;
            }
        }
        for(int i=0; i<count; i++){
            nums.push_back(0);
        }
    }
};
