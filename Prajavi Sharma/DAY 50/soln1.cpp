class Solution {
public:
    int longestValidParentheses(string s) {
     
        stack<int>st;
        st.push(-1);
        int maxi=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            if(s[i]==')'){
                st.pop();
                if(st.size()==0){
                    st.push(i);
                }
                else{
                    int c=i-st.top();
                    maxi=max(c,maxi);
                }
            }
        }
        return maxi;
    }
    
};
