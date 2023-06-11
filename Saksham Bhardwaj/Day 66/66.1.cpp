class Solution {
public:
    string convertToBase7(int num) {
        string s="";
        int l=0;
       if(num==0){
           return "0";
       }
        if(num>0)
        { int p=num;
        while (p!=0){
            l=p%7;
            string h=to_string(l);
            s=h+s;
            p=p/7;
        }
        }else if (num<0){
            int p=-num;
         while (p!=0){
            l=p%7;
            string h=to_string(l);
            s=h+s;
            p=p/7;
        }
        s='-'+s;
        }
        return s;

    }
};
