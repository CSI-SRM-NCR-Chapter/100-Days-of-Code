class Solution {
public:
    int fib(int n) {
        //Iterative Method
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        int f1=0,f2=1,i=2;
       int res=0;
        while(i<=n){
            res =f1+f2;
            i++;
            f1=f2;
            f2=res;
        }
        return res;
        
    }
};