class Solution {
public:
    string convertToBase7(int num) {
        string s="";
        int n=num;
        if(num==0) return s='0';
        while(num){
            int x=abs(num%7);
            s.insert(0,to_string(x));
            num=num/7;
        }
        if(n<0) s.insert(0,"-");
        return s;
    }
};
