class Solution {
public:
    int minLength(string s) {
        int n=s.size();
        stack<char> stk;
        stk.push('#');
        for(int i=0; i<n; i++){
            stk.push(s[i]);
            if(stk.top()=='B'){
                stk.pop();
                if(stk.top()=='A') stk.pop();
                else stk.push('B');
            }
            else if(stk.top()=='D'){
                stk.pop();
                if(stk.top()=='C') stk.pop();
                else stk.push('D');
            }
        }
        return stk.size()-1;
    }
};
