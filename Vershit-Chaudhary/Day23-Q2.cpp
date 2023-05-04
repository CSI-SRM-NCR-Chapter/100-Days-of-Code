class Solution {
public:
    int value(char c){
        if(c=='M'){
            return 1000;
        }
        else if(c=='D'){
            return 500;
        }
        else if(c=='C'){
            return 100;
        }
        else if(c=='X'){
            return 10;
        }
        else if(c=='L'){
            return 50;
        }
        else if(c=='V'){
            return 5;
        }
        else if(c=='I'){
            return 1;
        }
        else{
            return -1;
        }
    }
    int romanToInt(string s) {
        int l=s.length();
        int count=0;
        if(l==1){
            return value(s[0]);
        }
        for(int i=0;i<l;i++){
            if(i+1<l){
            if(value(s[i])>=value(s[i+1])){
                count=count+value(s[i]);
                continue;
            }
            else{
                count=count+value(s[i+1])-value(s[i]);
                i++;
                continue;
            }}
            else{
                if(value(s[i])<=value(s[i-1])){
                    count=count+value(s[i]);
                }
            }
        }
        return count;
    }
};
