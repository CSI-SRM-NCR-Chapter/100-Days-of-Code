class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        if(n==2)
            return "11";

        string str = "11";
        
        for(int i=3; i<=n ; i++){
            string temp = "";
            str = str+"&"; 
            int count = 1;

            for(int j = 1; j<str.length(); j++){
                if(str[j]!=str[j-1]){
                    temp = temp + to_string(count); 
                    temp = temp + str[j-1]; 
                    count = 1;
                }
                else
                    count++; 
            }
            
            str = temp;
        }
        
    return str;
    }
};
