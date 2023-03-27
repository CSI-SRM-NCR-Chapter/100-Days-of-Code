// https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int counter = 0;
      int element = 0;

      for (int num : nums) {
        if (counter == 0) {element = num; ++counter;}

        else if (element == num) ++counter;

        else --counter;

      }
      return element;
        
    }
};
