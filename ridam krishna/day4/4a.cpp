class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j;
        for(i=0; i<nums.size(); i++){
            j=i+1;
            //if duplicate elements are present in array then this line is imp
            while(j<nums.size() and nums[i]==nums[j]){
                j++;
            }
            // till here
            if(j-i>1){
                nums.erase(nums.begin()+i+1,nums.begin()+j);
            }
        
        }
        return nums.size();
        
    }
};
