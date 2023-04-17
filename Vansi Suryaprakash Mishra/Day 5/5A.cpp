class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int el=0;
       int c=0;
       for(int i:nums){
           if(c==0){
               el=i;
           }
           if(i==el) c++;
           else c--;
       }
       return el;
    }
};