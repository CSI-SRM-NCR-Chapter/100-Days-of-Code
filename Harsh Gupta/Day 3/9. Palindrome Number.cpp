class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string str = to_string(x);
        int s = 0, e = str.length()-1;
        while(s<=e){
            if(str[s]==str[e]){
                s++;
                e--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
