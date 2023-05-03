class FizzBuzz {
private:
    int temp;
    int n=1;

public:
    FizzBuzz(int temp) {
        this->temp=temp;
    }
    void fizz(function<void()> printFizz) {
        while(n<=temp){
            if(!(n%3==0 && n%5!=0)){
                sched_yield();
                continue;
            };
            printFizz();
            n++;
        }
    }
    void buzz(function<void()> printBuzz) {
        while(n<=temp){
            if( ! (n%3!=0 && n%5==0) ){
                sched_yield();
                continue;
            };
            printBuzz();
            n++;
        } 
    }
	void fizzbuzz(function<void()> printFizzBuzz) {
        while(n<=temp){
            if( ! (n%3==0 && n%5==0) ){
                sched_yield();
                continue;
            };
            printFizzBuzz();
            n++;
        }
    }
    void number(function<void(int)> printNumber) {
        while(n<=temp){
            if((n%3==0 || n%5==0)){
                sched_yield();
                continue;
            };
            printNumber(n);
            n++;
        } 
    }
};
