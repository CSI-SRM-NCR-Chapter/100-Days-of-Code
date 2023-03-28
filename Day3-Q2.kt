class Solution {
    fun isPalindrome(x: Int): Boolean {
        if(x<0)return false
        var temp=x;
        var temp2=0;
        while(temp!=0){
            temp2=temp2*10+temp%10;
            temp/=10;
        }
        if(temp2==x){
            return true
        }
        else{
            return false;
        }
    }
}
