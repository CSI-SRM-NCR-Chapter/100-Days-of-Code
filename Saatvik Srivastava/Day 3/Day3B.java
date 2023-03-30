class Solution {
    public boolean isPalindrome(int x) {
        int digit =0;
        int temp = x;
        while(temp>0)
        {
            int rem = temp%10;
             digit = digit*10 +rem;
            temp = temp/10;
        }
        if(digit == x){
            return true;
        }
        return false;
    }
}
