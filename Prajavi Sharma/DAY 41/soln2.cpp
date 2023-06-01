class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(st.empty()==true)
                     return false;
                 
                if(s[i]==']'){
                    if(st.top()=='['){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                
                }
                else if(s[i]=='}'){
                    if(st.top()=='{'){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                
                }
                else if(s[i]==')'){
                    if(st.top()=='('){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                
                }
                
            }
        
            
            
        }
        if(st.empty()==true){
            return true;
        }
        else{
            return false;
        }
        
    }
};
