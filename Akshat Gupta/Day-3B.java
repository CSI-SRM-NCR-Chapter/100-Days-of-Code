class Solution {
    public boolean isPalindrome(int x) {
        int y=0;
        int temp=x;
        while(x>0){
            int a = x%10;
            y=(y*10)+a;
            x=x/10;
        }
        if(temp==y){
            return true;
        }
        else{
            return false;
        }
    }
}
