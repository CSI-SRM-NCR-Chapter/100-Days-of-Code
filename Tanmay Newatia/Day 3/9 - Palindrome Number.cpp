class Solution {
public:
    bool isPalindrome(int x) {
        string intstr= to_string(x);
        int len=intstr.size();
        for(int i=0;i<len/2;i++){
            if (intstr[i]!=intstr[len-i-1]){
                return 0;
            }
        }
        return 1;
    }
};