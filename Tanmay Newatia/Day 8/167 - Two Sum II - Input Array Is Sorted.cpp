class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right=0,left=numbers.size()-1;
        while(right<left){
            int s=numbers[right]+numbers[left];
            if (s==target){
                return {right+1,left+1};
            }
            if(s>target){
                left--;
            }
            else{
                right++;
            }
        }
        return {0};
    }
};