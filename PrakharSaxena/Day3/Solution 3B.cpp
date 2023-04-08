class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int tp,ans=0;
        tp=x;
        while(tp!=0){
            int digit=tp%10;
            ans=ans*10+digit;
            tp=tp/10;

        }
        return ans==x;



    }
};