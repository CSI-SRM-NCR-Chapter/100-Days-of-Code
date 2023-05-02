class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> stack;

        stack.push(s[0]);

        for(int i=1;i<s.size();i++)
        {
            if(stack.empty())
            {
                stack.push(s[i]);
            }
            else
            {

                if((stack.top()==')')||(stack.top()=='}')||(stack.top()==']'))
                {
                    return false;
                }
                
                if((s[i]==')')||(s[i]=='}')||(s[i]==']'))
                {
                    if((s[i]==')')&&(stack.top()=='('))
                    {
                        stack.pop();
                    }
                    else if((s[i]=='}')&&(stack.top()=='{'))
                    {
                        stack.pop();
                    }
                    else if((s[i]==']')&&(stack.top()=='['))
                    {
                        stack.pop();
                    }
                    else
                    {
                        stack.push(s[i]);
                    }
                }
                else
                {
                    stack.push(s[i]);
                }
            }
        }

        if(stack.empty())
        {
            return true;
        }
        
        return false;
    }
};
