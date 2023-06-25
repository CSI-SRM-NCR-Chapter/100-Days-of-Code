class Solution {
public:
    int calculate(string s) {
        int i=0;
        int n=s.size();
        int ans=0;
        stack<int>st;
        int sign=1;
        while(i<n) {
            char c=s[i];
            if(isdigit(c)) {
                int num=0;
                while(i<n && isdigit(s[i])) {
                    num=num*10+(s[i]-'0');
                    i++;
                }
                ans+=sign*num;
            } 
            else if(c=='+') {
                sign=1;
                i++;
            } 
            else if(c=='-') {
                sign=-1;
                i++;
            } 
            else if(c=='(') {
                st.push(ans);
                st.push(sign);
                ans=0;
                sign=1;
                i++;
            } 
            else if(c==')') {
                int prevSign=st.top();
                st.pop();
                int prevAns=st.top();
                st.pop();
                ans=prevAns+(prevSign * ans);
                i++;
            } 
            else{
                i++;  
            }
        }
        return ans;
    }
};