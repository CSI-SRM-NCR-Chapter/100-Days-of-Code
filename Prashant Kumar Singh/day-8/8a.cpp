class Solution {
public:
    string reverseWords(string s) {
        s = ' ' + s; string str = ""; string ans = "";
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] != ' ')
                str = str + s[i];
            
            else if(s[i] == ' ' && s[i+1] != ' ')
                str = str + ' ';
        }
        
        if(str[0] == ' ')
            str = str.substr(1);
        
        if(str[str.size()-1] == ' ')
            str = str.substr(0,str.length()-1);

        string temp = "";   str= str + " ";
        
        for(int i = 0 ; i < str.length() ; i++){
            
            if(str[i] != ' ')
                temp = temp + str[i];
            
            else{
                ans = temp + " " + ans;
                temp = "";
            }
        }
        
        ans.pop_back();
        return ans;
    }
};
