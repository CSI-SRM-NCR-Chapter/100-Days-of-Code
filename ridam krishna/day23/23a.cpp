class Solution {
public:
    int romanToInt(string s) {
        vector<int>v;
        int sum=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='I' && s[i+1]=='V'){
                i++;
                v.push_back(4);
            }
            else if(s[i]=='I' && s[i+1]=='X'){
                i++;
                v.push_back(9);
            }
            else if(s[i]=='X' && s[i+1]=='L'){
                i++;
                v.push_back(40);
            }
            else if(s[i]=='X' && s[i+1]=='C'){
                i++;
                v.push_back(90);
            }
            else if(s[i]=='C' && s[i+1]=='D'){
                i++;
                v.push_back(400);
            }
            else if(s[i]=='C' && s[i+1]=='M'){
                i++;
                v.push_back(900);
            }
            else if(s[i]=='I') v.push_back(1);
            else if(s[i]=='V') v.push_back(5);
            else if(s[i]=='X') v.push_back(10);
            else if(s[i]=='L') v.push_back(50);
            else if(s[i]=='C') v.push_back(100);
            else if(s[i]=='D') v.push_back(500);
            else if(s[i]=='M') v.push_back(1000);
            else v.push_back(0);
        }
        for(auto x: v){
            // cout<<x<<" ";
            sum=sum+x;
        }
        return sum;
    }
};
