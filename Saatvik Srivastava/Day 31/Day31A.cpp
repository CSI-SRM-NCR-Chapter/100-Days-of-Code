class Solution {
public:
    bool rotateString(string s, string goal) {
        int  n = s.size();
        if(n != goal.size()){
            return false;
        }
        while(n--){
            if(s == goal){
                return true;
            }
            s = s.substr(1) + s[0];
        }
        return false;
    }
};
