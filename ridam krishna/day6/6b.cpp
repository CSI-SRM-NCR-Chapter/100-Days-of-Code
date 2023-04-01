class Solution {
public:
    int sumdig(int a){
        int sum=0;
        while(a>0){
            sum+=a%10;
            a/=10;
        }
        return sum;
    }
    int addDigits(int num){
        while(num>=10){
            int res=sumdig(num);
            num=res;
        }
        return num;
    }
};
