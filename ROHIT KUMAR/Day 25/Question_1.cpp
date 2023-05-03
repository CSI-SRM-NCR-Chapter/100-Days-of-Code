class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size() > b.size()){
            string zeros(a.size()-b.size(), '0');
            b = zeros + b;
        }
        else{
            string zeros(b.size()-a.size(), '0');
            a = zeros + a;
        }
        string ans(a.size(),'0');
        int carry=0;
        for(int i=a.size()-1; i>=0; i--){
            if((a[i]=='1' && b[i]=='1')){
                if(carry==1){
                    ans[i] = '1';
                }
                carry=1;
            }
            else if(a[i]=='0' && b[i]=='0'){
                if(carry==1){
                    ans[i] ='1';
                }
                carry=0;
            }
            else{
                if(carry==1){
                    ans[i] = '0';
                    carry=1;
                }
                else{
                    ans[i] = '1';
                    carry=0;
                }
            }
        }
        if(carry==1){
            ans = '1' + ans;
        }
        

        return ans;
    }
};
