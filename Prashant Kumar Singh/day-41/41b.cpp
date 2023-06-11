class Solution{
public:
    bool isValid(string s){
        stack<char> ans; 
        for(auto i:s){
            if(i=='(' or i=='{' or i=='[') ans.push(i);  
            else{
                if(ans.empty() || (ans.top()=='(' && i!=')') || (ans.top()=='{' && i!='}') || (ans.top()=='[' && i!=']')) return false;
                ans.pop(); 
            }
        }
        return ans.empty();
    }
};
