class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        if(x<0) return false;
        for(int i=0;i<s.length();i++){
            if(s[i]!=s[s.length()-1-i])
            return false;
        }
        return true;
    }
};
