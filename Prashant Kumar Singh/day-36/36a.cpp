class FizzBuzz {
private:
    int n;
    std::mutex mux_;
    int x {1};
    std::condition_variable cv_;
public:
    FizzBuzz(int n) {
        this->n = n;
    }

    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz) {
        while (true) {
            std::unique_lock<std::mutex> lock(mux_);
            cv_.wait(lock, [this]{ return x > n || x%3==0 && x%5 !=0; });
            if (x > n) { break; }
            printFizz();
            ++x;
            cv_.notify_all();
        }
    }

    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz) {
        while (true) {
            std::unique_lock<std::mutex> lock(mux_);
            cv_.wait(lock, [this]{ return x > n || x%3 != 0 && x%5 ==0 ; });
            if (x > n) { break; }
            printBuzz();
            ++x;
            cv_.notify_all();
        }
    }

    // printFizzBuzz() outputs "fizzbuzz".
	void fizzbuzz(function<void()> printFizzBuzz) {
        while (true) {
            std::unique_lock<std::mutex> lock(mux_);
            cv_.wait(lock, [this]{ return x > n || x%3==0 && x%5 ==0; });
            if (x > n) { break; }
            printFizzBuzz();
            ++x;
            cv_.notify_all();
        }
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber) {
        while (true) {
            std::unique_lock<std::mutex> lock(mux_);
            cv_.wait(lock, [this]{ return x > n || x%3!=0 && x%5 !=0; });
            if (x > n) { break; }
            printNumber(x);
            ++x;
            cv_.notify_all();
        }
    }
};
