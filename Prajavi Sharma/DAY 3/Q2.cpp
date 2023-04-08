class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int temp,ans=0;
        temp=x;
        while(temp!=0){
            int digit=temp%10;
            ans=ans*10+digit;
            temp=temp/10;
            
        }
        return ans==x;
        
        
    
    }
};
