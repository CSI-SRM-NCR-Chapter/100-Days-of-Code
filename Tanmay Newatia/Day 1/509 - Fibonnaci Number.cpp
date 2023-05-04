class Solution {
public:
    int fib(int n) {
        if (n==0){return 0;}
        else if (n==1){return 1;}
        else{
            int a=0,b=1,c;
            for(int i=2;i<=n;i++){
                c=a+b;
                a=b;
                b=c;
            }
            return c;
        }
    }
};

/*
class Solution {
public:
    int fib(int n) {
        if (n==0){return 0;}
        else if (n==1){return 1;}
        return fib(n-1)+fib(n-2);
    }
};
*/