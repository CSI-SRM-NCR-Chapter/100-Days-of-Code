class Solution {
public:
    int calculate(string s) {
    
    int i,n=s.size(),sum=0,sign=1;
    stack<int> st;
    
    for(i=0;i<n;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            int num=0;
            while(n>i && s[i]>='0' && s[i]<='9')
            {
                num =num*10 +(s[i]-'0');
                i++;
            }
            sum+=num*sign;
            i--;
        }
        else if(s[i]=='+')
        {
            sign=1;
        }
        else if(s[i]=='-')
        {
            sign=-1;
        }
        else if(s[i]=='(')
        {
            st.push(sum);
            st.push(sign);
            sum=0;
            sign=1;
        }
        else if(s[i]==')')
        {
            sum=st.top()*sum;
            st.pop();
            sum+=st.top();
            st.pop();
        }
    }
    return sum;
}
};
