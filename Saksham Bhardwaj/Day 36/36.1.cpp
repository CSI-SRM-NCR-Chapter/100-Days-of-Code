#include <semaphore.h>

class FizzBuzz {
private:
    int n;
    sem_t sem_fizz, sem_buzz, sem_fizzbuzz, sem_number;

public:
    FizzBuzz(int n) {
        this->n = n;
        sem_init(&sem_number, 0, 1);
        sem_init(&sem_fizz, 0, 0);
        sem_init(&sem_buzz, 0, 0);
        sem_init(&sem_fizzbuzz, 0, 0);
    }

    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz)
    {
        for (int i = 3; i <= n; i = ((i + 3) % 5) == 0 ? i + 6 : (i + 3))
        {
            sem_wait(&sem_fizz);
            printFizz();
            post_next_sem(i + 1);
        }
    }

    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz)
    {
        for (int i = 5; i <= n; i = ((i + 5) % 3) == 0 ? i + 10 : (i + 5))
        {
            sem_wait(&sem_buzz);
            printBuzz();
            post_next_sem(i + 1);
        }
    }

    // printFizzBuzz() outputs "fizzbuzz".
	void fizzbuzz(function<void()> printFizzBuzz)
    {
        for (int i = 15; i <= n; i += 15)
        {
            sem_wait(&sem_fizzbuzz);
            printFizzBuzz();
            post_next_sem(i + 1);
        }        
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber)
    {
        for (int i = 1; i <= n; i = inc_until(i, [](int i){ return i % 3 == 0 || i % 5 == 0; }))
        {
            sem_wait(&sem_number);
            printNumber(i);
            post_next_sem(i + 1);
        }
    }

    void post_next_sem(int next_i)
    {
        if (next_i % 3 == 0 && next_i % 5 != 0)
        {
            sem_post(&sem_fizz);
        }
        else if (next_i % 3 != 0 && next_i % 5 == 0)
        {
            sem_post(&sem_buzz);
        }
        else if (next_i % 3 == 0 && next_i % 5 == 0)
        {
            sem_post(&sem_fizzbuzz);
        }
        else
        {
            sem_post(&sem_number);
        }
    }

    int inc_until(int i, function<bool(int)> cond)
    {
        do
        {
            i++;
        }
        while (cond(i));
        return i;
    }
};
