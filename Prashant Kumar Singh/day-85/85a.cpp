class Solution {
public:
    int calculate(string s) {
        double sum = 0;
        int sign = 1;
        stack<pair<int,int>> stack;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                double num = 0;
                while(i<s.size() && isdigit(s[i])){
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i--;
                sum += num * sign;
                sign = 1;
            }
            else if(s[i] == '('){
                stack.push({sum, sign});
                sum = 0;
                sign = 1;
            }
            else if(s[i] == ')'){
                sum = stack.top().first + (stack.top().second * sum);
                stack.pop();

            }
            else if(s[i] == '-'){
                sign = -1 * sign;
            }
        }
        return sum;
    }
};
