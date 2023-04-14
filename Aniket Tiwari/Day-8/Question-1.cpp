#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string res;
        string t="";
        for(char c:s){
            if(c!=' ')
            t+=c;
            else{
                if(t!=""&&res!=""){
                    res=t+" "+res;
                }
                else if(t=="")
                continue;
                else if(res=="")
                res=t+res;
            }
        }
        return res;
    }
};

int main(){
    Solution s;
    cout<<s.reverseWords("The sky is blue");
}