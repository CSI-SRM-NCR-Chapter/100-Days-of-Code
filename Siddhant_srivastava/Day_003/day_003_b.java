class Solution {
    public boolean isPalindrome(int x) {
      int  tt =x,rev = 0;
      while(tt>0)
      {
          int t = tt%10;tt/=10;
          rev = rev*10+t;
      }
        if(rev==x)
        return true;else return false;
    }
}