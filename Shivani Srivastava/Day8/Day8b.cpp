class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         int low=0;
             int high=numbers.size()-1;
             for(int i=0;i<numbers.size();i++){
                 if(numbers[low]+numbers[high]==target){
                     return {low+1,high+1};
                 }
                 else if(numbers[low]+numbers[high]<target){
                     low++;
                 }
                 else{
                     high--;
                 }
             }
        return {-1,-1};
    }
};