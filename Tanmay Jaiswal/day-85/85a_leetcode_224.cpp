class Solution {
public:
    int calculate(string s) {
        stack<int> myStack({1});
        int res = 0, sum = 0, sign = 1;
        for(auto ch: s) {
            if(isdigit(ch)) sum = sum * 10 + (ch - '0');
            else{
                res += sum * sign * myStack.top();
                sum = 0;
                if(ch == '-') sign = -1;
                else if(ch == '+') sign = 1;
                else if(ch == '(') myStack.push(myStack.top() * sign), sign = 1;
                else if(ch == ')') myStack.pop();
            }
        }
        return res += (sum * sign);
    }
};
