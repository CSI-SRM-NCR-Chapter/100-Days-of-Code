class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        return fib(n-1)+fib(n-2);
    }
}; //Day 1.1


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string> v;
        for(int i=1 ; i<=n; i++)
        {
            if (i%5==0 && i%3==0) v.push_back("FizzBuzz");
            else if (i%3==0) v.push_back("Fizz");
            else if (i%5==0) v.push_back("Buzz");
            else v.push_back(to_string(i));
        }
        return v;
    }
}; //Day 1.2