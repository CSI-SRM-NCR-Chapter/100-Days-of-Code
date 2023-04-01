class Solution {
public:
    bool isPalindrome(int x) {
        string ans=to_string(x);
        int i=0, j=ans.size()-1;
        int flag=1;
        while(i<j){
            if(ans[i]!=ans[j]){
                flag=0;
                break;
            }
            i++;
            j--;
        }
        if(flag==1){
            return true;
        }
        else{
            return false;
        }
    }
};
