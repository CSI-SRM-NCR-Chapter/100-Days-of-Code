class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber){
            int x=(columnNumber-1)%26;
            s=(char)(x+'A')+s;
            columnNumber=(columnNumber-1)/26;
        }
        return s;
    }
};
