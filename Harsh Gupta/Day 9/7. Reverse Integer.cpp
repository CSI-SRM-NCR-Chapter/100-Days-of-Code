class Solution {
public:
    int reverse(int x) {
        int num=x%10;
        x/=10;
        while(x!=0){
            if((num)<INT_MIN/10 || (num)>INT_MAX/10)
            {return 0;}
            
            num = (num*10)+(x%10);
            
            x/=10;

        }
        
        return num;
    }
};
