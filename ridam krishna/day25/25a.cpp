class Solution {
public:
    string addBinary(string a, string b) {
        int x=a.length()-1;
        int y=b.length()-1;
        int carry=0;
        string res;
        while(x>=0 || y>=0 || carry){
            if(x>=0){
                carry=carry+a[x]-'0';
                x--;
            }
            if(y>=0){
                carry=carry+b[y]-'0';
                y--;
            }
            res+=carry%2 +'0';
            carry=carry/2;
        }
        reverse(res.begin(), res.end());
        return res;

    }
};
