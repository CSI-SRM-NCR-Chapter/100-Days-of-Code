class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int carry =0;
        int n1 = a.length();
        int n2 = b.length();
        int i=0;
        while(i<n1 || i<n2 || carry!=0){
            int x =0;
            if(i<n1 && a[n1-1-i]=='1'){ x = 1; }
            int y=0;
            if(i<n2 && b[n2-1-i]=='1'){ y = 1; }
            result = to_string((x+y+carry)%2)+result;
            carry = (x+y+carry)/2;
            i++;
        }
        return result;
    }
};