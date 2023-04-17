class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || x!=0 && x%10==0) return false;
        unsigned int y=0; int k=x;
        while(x>0)
        {
            y=(y*10)+(x%10);
            x=x/10;
        }
        if(y==k) return true;
        return 0;
    }
};