class Solution {
public:
    bool isPalindrome(int x) {
        int count=x;
        long int temp=0;
        while(count)
        {
            temp=temp*10+count%10;
            count=count/10;
        }
        if(x<0) return false;
        else if(temp==x)  return true;
        else      return false;         
     
    }
    
};-