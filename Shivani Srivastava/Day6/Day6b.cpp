class Solution {
public:
    int addDigits(int num) {
        int ans=num;
        if(ans<10){
            return ans;
        }
        ans=ans%10+addDigits(ans/10);
        ans=addDigits(ans);
        return ans;
    }
};