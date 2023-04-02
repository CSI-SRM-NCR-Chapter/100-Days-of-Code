class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> v1;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                v1.push_back("FizzBuzz");
            }
            else if (i % 3 == 0)
            {
                v1.push_back("Fizz");
            }
            else if (i % 5 == 0)
            {
                v1.push_back("Buzz");
            }
            else
            {
                v1.push_back(to_string(i));
            }
        }
        return v1;
    }
};