class Solution {
public:
    int addDigits(int num) {
        int s=0;
        while(num!=0){
            s+=num%10;
            num/=10;
        }
        if(s<10)
        return s;
        else 
        return addDigits(s);
    }
};