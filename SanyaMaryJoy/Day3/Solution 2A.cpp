class Solution {
public:
    bool isPalindrome(int x) {
       if (x<0) {
           return false;
       }
       if(x!=0 and x%10==0){
           return false;
       }
       int num = x;
       int r=0;
       while(num>0){
           r = r*10 + num % 10;
           num = num/10;

       }
       return x = r;
    }
};