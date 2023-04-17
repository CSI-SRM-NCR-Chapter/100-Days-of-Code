class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            int temp=num;
            int ans=0;
            while(temp>=1){
                ans+=temp%10;
                temp/=10;
            }
            num=ans;
        }
        return num;
    }
};