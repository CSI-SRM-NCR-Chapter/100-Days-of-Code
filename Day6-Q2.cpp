class Solution {
public:
    int addDigits(int num) {
        int temp=num,result=0;
        while(temp!=0){
            result+=temp%10;
            temp=temp/10;
            if(temp<=9 && temp!=0){
                result+=temp;
                temp=result;
                result=0;
            }
        }
        return result;
    }
};
