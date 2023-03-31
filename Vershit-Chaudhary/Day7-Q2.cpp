class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=0;
        vector<int> temp=nums;
        for(int i=0;i<nums.size();i++){
            if(temp[i]!=0){
                nums[index]=temp[i];
                temp[i]=0;
                index++;
            }
        }
        for(int j=index;j<nums.size();j++){
            nums[j]=0;
        }
    }
};
